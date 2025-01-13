/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:22:51 by sbolivar          #+#    #+#             */
/*   Updated: 2024/12/13 18:43:41 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*buffer;
	t_list	*node;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (0);
	buffer = NULL;
	while (lst)
	{
		buffer = f(lst->content);
		node = ft_lstnew(buffer);
		if (!node)
		{
			del(buffer);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
