/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:10:38 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/27 08:55:16 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 00 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*#include <stdio.h>
int main()
{
    int prueba;
    prueba = ft_isascii('7');
    printf("%d", prueba);
    return (0);
}*/
