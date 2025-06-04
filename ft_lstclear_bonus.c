/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:08:18 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/03 17:34:55 by vfranta          ###   ########.fr       */
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

void	ft_lstclear(t_list **lst, void (*del)(void*))
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
