/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:50:49 by sbolivar          #+#    #+#             */
/*   Updated: 2025/01/10 19:56:42 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned int	res;

	res = 0;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	res = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (res);
	return (0);
}

char	*join_space(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	if(!s2)
		return ((char *)s1);
	i = 0;
	res = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 2));
	while (s1[i] != 0)
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	res[i] = ' ';
	i++;
	while (s2[j] != 0)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = 0;
	return (res);
}

long	atol(const char *str)
{
	long	res;
	long	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}