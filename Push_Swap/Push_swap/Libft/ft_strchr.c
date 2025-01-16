/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:54:56 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/27 08:57:28 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ((char)c))
			return (&((char *)str)[i]);
		i++;
	}
	if (((char)c) == 0)
		return (&((char *)str)[i]);
	return (0);
}

/*#include <stdio.h>
int main()
{
	const char *str;
	int c;

	c = 'u';
	str = "hola mundo";
	printf("%s\n", ft_strchr(str, c));
}*/
