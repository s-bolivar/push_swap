/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:04:37 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/30 11:04:39 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	len(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		++i;
	}
	while (n > 0)
	{
		++i;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	num;
	char		*res;
	int			i;

	num = n;
	i = len((long int) n);
	res = (char *) malloc((i + 1) * sizeof(char));
	if (res == 0)
		return (0);
	res[i--] = '\0';
	if (num < 0)
	{
		*res = '-';
		num *= -1;
	}
	if (num == 0)
		*res = '0';
	while (num > 0)
	{
		res[i--] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}

/*int main() 
{
    int number = -2147483648;
    char *result = ft_itoa(number);
    printf("%s\n", result);
}*/