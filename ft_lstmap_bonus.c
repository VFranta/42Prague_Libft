/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:18:24 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/03 17:34:29 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_delone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst -> content);
		free (lst);
	}
	else
		return ;
}

static void	ft_clearlist(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)-> next;
		ft_delone(*lst, del);
		*lst = tmp;
	}
	lst = NULL;
}

static t_list	*ft_newlist(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = 0;
	return (new);
}

static void	ft_add_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
		*lst = new;
	else
	{
		last = *lst;
		while (last && last -> next)
			last = last ->next;
		last ->next = new;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !f || !del)
		return ((void *)0);
	new = NULL;
	while (lst)
	{
		temp = ft_newlist(f(lst -> content));
		if (!temp)
		{
			ft_clearlist(&new, del);
			return ((void *)0);
		}
		ft_add_back(&new, temp);
		lst = lst -> next;
	}
	return (new);
}
