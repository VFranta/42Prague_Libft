/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 22:12:23 by vfranta           #+#    #+#             */
/*   Updated: 2025/05/24 12:21:50 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//lst- adress of a pointer to 1. node
//new - addr of a pointer to new node

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new ->next = *lst;
	*lst = new;
}
