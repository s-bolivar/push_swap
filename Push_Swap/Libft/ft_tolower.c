/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:01:29 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/27 09:07:23 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/*#include <stdio.h>

int main(void)
{
	char str[4] = "HOLA";
	int	count = 0;

	while (str[count])
	{
		str[count] = ft_tolower(str[count]);
		count++;
	}
	printf("%s", str);

}*/
