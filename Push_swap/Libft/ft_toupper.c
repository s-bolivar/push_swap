/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:01:45 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/27 09:07:36 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/*#include <stdio.h>

int main(void)
{
	char str[4] = "hola";
	int	count = 0;

	while (str[count])
	{
		str[count] = ft_toupper(str[count]);
		count++;
	}
	printf("%s", str);
	
}*/
