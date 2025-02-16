/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:54:55 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/27 08:55:33 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(char *c)
{
	int	i;
	int size_total;

	size_total = ft_strlen(c);
	i = 0;
	while (c[i] >= '0' && c[i] <= '9')
		i++;
	if (size_total == i)
		return (1);
	else
		return (0);
}

#include <stdio.h>
int main()
{
    int 	prueba;
	int		prueba2;


    prueba = ft_isdigit('2');
    printf("%d\n", prueba);

    return (0);
}
