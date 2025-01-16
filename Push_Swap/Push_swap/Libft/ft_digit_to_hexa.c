/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_to_hexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:01:22 by sbolivar          #+#    #+#             */
/*   Updated: 2024/12/20 17:03:36 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit_to_hexa(size_t n, const char format, int b)
{
	int			counter;

	counter = 0;
	if (n == 0 && b)
		return (ft_putstr_fd("(nil)"));
	else if (b)
		counter += ft_putstr_fd("0x");
	if (n == 0)
		return (counter + ft_putchar_fd('0'));
	if (n >= 16)
	{
		counter += ft_digit_to_hexa(n / 16, format, 0);
	}
	if (n % 16 <= 9)
		counter += ft_putchar_fd(n % 16 + '0');
	else if (format == 'x' || b)
		counter += ft_putchar_fd(n % 16 - 10 + 'a');
	else if (format == 'X')
		counter += ft_putchar_fd(n % 16 - 10 + 'A');
	return (counter);
}
