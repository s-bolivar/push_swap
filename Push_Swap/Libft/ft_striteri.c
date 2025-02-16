/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:05:50 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/30 11:05:51 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*void my_func(unsigned int i, char *c)
{
    (void)i;
    *c = ft_toupper((unsigned char)*c);
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*#include<stdio.h>

int main()
{
	char str[] = "example string";
	ft_striteri(str, my_func);
	printf("%s\n", str);
}*/