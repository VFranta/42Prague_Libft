/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 22:19:36 by vfranta           #+#    #+#             */
/*   Updated: 2025/05/24 12:21:17 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lenght;

	lenght = 0;
	while (lst != 0)
	{
		lenght++;
		lst = lst -> next;
	}
	return (lenght);
}
