/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:22:21 by sbolivar          #+#    #+#             */
/*   Updated: 2025/01/07 15:58:53 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    int     i;
    char    **str;

    if (!checker(ac, av))
    {
        i = 0;
        str = join_and_separate(ac, av);
        while (str[i])
	    {
            ft_printf("%d\n", ft_atol(str[i], 0, 1));
		    free (str[i]);
		    i++;
	    }
    }
    else
        return (1);
}