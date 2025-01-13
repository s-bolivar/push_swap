/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:09:58 by sbolivar          #+#    #+#             */
/*   Updated: 2024/12/20 17:13:18 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_putendl_fd(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i]);
		i++;
	}
	ft_putchar_fd('\n');
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