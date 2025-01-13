/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:04:00 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/30 11:04:01 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*ft_str(char const *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (!(ptr))
	{
		free(ptr);
		return (NULL);
	}
	ft_strlcpy(ptr, ((char *)s), i + 1);
	return (ptr);
}

static void	ft_free_tab(char **tab)
{
	char	**pos;

	if (tab == 0)
		return ;
	pos = tab;
	while (*pos != 0)
		free(*(pos++));
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		strs_len;
	char	**ptr;

	strs_len = count_words(s, c);
	ptr = ft_calloc(sizeof(char *), (strs_len + 1));
	if (!(ptr))
		return (0);
	i = -1;
	while (++i < strs_len)
	{
		while (s[0] == c)
			s++;
		ptr[i] = ft_str(s, c);
		if (!(ptr[i]))
		{
			ft_free_tab(ptr);
			return (NULL);
		}
		s += ft_strlen(ptr[i]);
	}
	ptr[i] = 0;
	return (ptr);
}

/*int main() 
{
    char *str = "Hola mundo 42";
    char **result = ft_split(str, ' '); 

    if (result) {
        for (int i = 0; result[i] != NULL; i++) {
            printf("Palabra %d: %s\n", i, result[i]);
            free(result[i]); 
        }
        free(result); 
    }

    return 0;
}*/