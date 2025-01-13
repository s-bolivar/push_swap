/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:09:14 by sbolivar          #+#    #+#             */
/*   Updated: 2024/12/20 16:55:22 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar_fd(char c)
{
	return (write(1, &c, 1));
}

/*#include <stdio.h>
int main()
{
	char c;
	char fd;
	ft_putchar_fd('z', 0);
	ft_putchar_fd('z', 1);
	ft_putchar_fd('z', 2);
}*/