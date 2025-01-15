/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:39:36 by sbolivar          #+#    #+#             */
/*   Updated: 2025/01/10 21:11:39 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checknum(const char	*str)
{
	int		i;
	int		sizetotal;

	i = 0;
	sizetotal = ft_strlen(str);
	if (!str)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
		i++;
	if (sizetotal == i && (str[i - 1] <= '9' && str[i - 1] >= '0'))
	{
		return (1);
	}
	else
		return (0);
}

char	*join_str(int ac, char **av)
{
	int		i;
	int		j;
	char	*join;

	j = 2;
	i = 1;
	join = join_space(av[i], av[j]);
	while (i < ac)
	{
		j = i + 2;
		if(j < ac)
			join = join_space(join, av[j]);
		i++;
	}
	return (join);
}


int	comparate(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_strcmp(av[i], av[j]) == 0)
				return (0);
			j++;
		}
		if (checknum(av[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	checker(int ac, char **av)
{
	char	**str;
	char	*join;

	join = join_str(ac, av);
	str = ft_split(join, ' ');
	if (comparate(str))
		return (1);
	else
		return (0);
}

int	main(int ac, char **av)
{
		printf("%i\n", checker(ac, av));
	return (0);
}
