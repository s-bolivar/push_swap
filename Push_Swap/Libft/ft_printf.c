/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:19:10 by sbolivar          #+#    #+#             */
/*   Updated: 2024/12/20 17:20:57 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_exclusive_putnbr_fd(unsigned int n)
{
	size_t	i;

	i = 0;
	if (n)
	{
		i += ft_putchar_fd('-');
		i += ft_putnbr_fd(-n);
	}
	else if (n > 9)
	{
		i += ft_putnbr_fd(n / 10);
		i += ft_putnbr_fd(n % 10);
	}
	else
		i += ft_putchar_fd(n + '0');
	return (i);
}

int	ft_filter(va_list vargs, const char format)
{
	int	res;

	res = 0;
	if (format == 'c')
		res += ft_putchar_fd(va_arg(vargs, int));
	else if (format == 's')
		res += ft_putstr_fd(va_arg(vargs, char *));
	else if (format == 'p')
		res += ft_digit_to_hexa((size_t)va_arg(vargs, void *), 'x', 1);
	else if (format == 'i' || format == 'd')
		res += ft_putnbr_fd(va_arg(vargs, int));
	else if (format == 'u')
		res += ft_exclusive_putnbr_fd(va_arg(vargs, unsigned int));
	else if (format == 'x')
		res += ft_digit_to_hexa(va_arg(vargs, unsigned int), 'x', 0);
	else if (format == 'X')
		res += ft_digit_to_hexa(va_arg(vargs, unsigned int), 'X', 0);
	else if (format == '%')
		res += ft_putchar_fd('%');
	return (res);
}

int	ft_printf(const char *format, ...)
{
	va_list	vargs;
	int		i;
	int		res;

	i = 0;
	res = 0;
	va_start(vargs, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			res += ft_filter(vargs, format[i + 1]);
			i++;
		}
		else
			res += ft_putchar_fd (format[i]);
		i++;
	}
	va_end (vargs);
	return (res);
}

// int main()
// {

// 	ft_printf("%d", -234);
// }
