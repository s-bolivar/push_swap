/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:50:49 by sbolivar          #+#    #+#             */
/*   Updated: 2025/01/17 19:26:03 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	comp_zero(const char *s1, const char *s2)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	if (s1[i] == '-' || s1[i] == '+')
		i++;
	if (s2[j] == '-' || s2[j] == '+')
		j++;
	while (s1[i] && s1[i] == '0')
		i++;
	while (s2[j] && s2[j] == '0')
		j++;
	if (s1[i] == 0 && s2[j] == 0)
		return (0);
	return (1);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	if (s1[i] == '+')
		i++;
	if (s2[j] == '+')
		j++;
	while (s1[i] == '0' || ((s1[i] == '-' && s2[j] == '-')
			|| ((s1[i + 1] == '0') && (s1[i] == '-' && s2[i] == '-'))))
		i++;
	while (s2[j] == '0' || ((s1[j] == '-' && s2[j] == '-')
			|| ((s2[j + 1] == '0') && (s1[j] == '-' && s2[j] == '-'))))
		j++;
	while (s1[i] && s2[j] && s1[i] == s2[j])
	{
		j++;
		i++;
	}
	if ((s1[i] == 0 && s2[j] == 0) || comp_zero(s1, s2) == 0)
		return (0);
	return (1);
}


char	*join_space(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	if (!s2)
		return ((char *)s1);
	i = 0;
	res = ft_calloc(sizeof(char), ((ft_strlen(s1) + ft_strlen(s2)) + 2));
	while (s1[i] != 0)
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	res[i] = ' ';
	i++;
	while (s2[j] != '\0')
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	return (res);
}

long	ft_atol(const char *str, long res, long sign)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (res == 0 && '0' <= *str && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	while (res != 0 && '0' <= *str && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
		if (res == 0)
		{
			ft_printf("Error\n");
			exit (1);
		}
	}
	return (res * sign);
}

size_t	ft_strlen_strings(char **av)
{
	int		i;

	i = 1;
	while (av[i] != NULL)
	{
		if (!checknum(av[i]))
			return (0);
		i++;
	}
	return (i);
}
