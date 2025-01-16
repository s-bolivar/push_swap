/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:39:36 by sbolivar          #+#    #+#             */
/*   Updated: 2025/01/16 12:14:39 by sbolivar         ###   ########.fr       */
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
	char	*temp;

	j = 2;
	i = 1;
	join = join_space(av[i], av[j]);
	while (i < ac)
	{
		j = i + 2;
		if (j < ac)
		{
			temp = join_space(join, av[j]);
			free(join);
			join = temp;
		}
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

char	**checker(int ac, char **av)
{
	int		i;
	char	**str;
	char	*join;

	i = 0;
	join = join_str(ac, av);
	while (join[i] == ' ' || (join[i] >= 9 && join[i] <= 13))
		i++;
	if (!join[i])
		return (NULL);
	str = ft_split(join, ' ');
	if (comparate(str) == 0)
		return (NULL);
	if (comparate(str) == 1)
		return (str);
	return (NULL);
}

int	main(int ac, char **av)
{
	int		i;
	char	**str;

	str = checker(ac, av);
	i = 0;
	if (!str)
	{
		printf("Error\n");
		return (1);
	}
	while (str[i])
	{
		if (atol(str[i]) < INT_MIN || atol(str[i]) > INT_MAX)
		{
			printf("Error\n");
			return (1);
		}
		printf("%ld\n", atol(str[i]));
		free (str[i]);
		i++;
	}
	free (str);
	return (0);
}
