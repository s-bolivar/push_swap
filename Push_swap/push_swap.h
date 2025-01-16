/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 13:36:57 by sbolivar          #+#    #+#             */
/*   Updated: 2025/01/10 19:58:07 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "Libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				number;
	int				count;
	struct s_stack	*next;
}	t_stack;

int		ft_strcmp(const char *s1, const char *s2);
char	*join_space(char const *s1, char const *s2);
long	atol(const char *str);

#endif