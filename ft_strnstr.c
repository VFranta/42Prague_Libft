/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:20:12 by vfranta           #+#    #+#             */
/*   Updated: 2025/05/22 19:42:40 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// if (ft_strlen(little) == 0)
// 	return ((char *)big);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		leng;
	size_t	c;
	size_t	i;

	c = 0;
	i = 0;
	leng = 0;
	while (little[leng])
		leng++;
	if (leng == 0)
		return ((char *)big);
	while (big[c] != '\0' && c < len)
	{
		i = 0;
		while ((big[c + i] == little[i])
			&& ((c + i) < len))
		{
			i++;
			if (little[i] == '\0')
				return ((char *)(big + c));
		}
		c++;
	}
	return (NULL);
}
