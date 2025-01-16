/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:10:19 by sbolivar          #+#    #+#             */
/*   Updated: 2024/12/20 17:00:54 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n)
{
	size_t	i;

	i = 0;
	if (n == -2147483648)
	{
		i += ft_putstr_fd("-2147483648");
		return (i);
	}
	if (n < 0)
	{
		i += ft_putchar_fd('-');
		i += ft_putnbr_fd(-n);
	}
	if (n > 9)
	{
		i += ft_putnbr_fd(n / 10);
		i += ft_putnbr_fd(n % 10);
	}
	else
	{
		if (n >= 0)
			i += ft_putchar_fd(n + '0');
	}
	return (i);
}

/*#include <stdio.h>
int main()
{
	int c;
	char fd;
	ft_putchar_fd(113, 0);
	ft_putchar_fd(131, 1);
	ft_putchar_fd(456, 2);
}*/