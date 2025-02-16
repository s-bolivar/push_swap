/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 13:36:57 by sbolivar          #+#    #+#             */
/*   Updated: 2025/01/17 15:01:03 by sbolivar         ###   ########.fr       */
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
long	ft_atol(const char *str, long res, long sign);
size_t	ft_strlen_strings(char **str);
char	**join_and_separate(int ac, char **av);
char	*join_str(int ac, char **av);
int		comparate(char **av);
int		checknum(const char	*str);

#endif