/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:09:33 by sbolivar          #+#    #+#             */
/*   Updated: 2024/12/20 17:00:12 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
			write(1, &s[i++], 1);
	}
	else
		return (write(1, "(null)", 6));
	return (i);
}
/*#include <stdio.h>
int main()
{
	char *c;
	char fd;
	ft_putchar_fd("buenas", 0);
	ft_putchar_fd("Jordi Wild", 1);
	ft_putchar_fd("olvidona", 2);
}*/