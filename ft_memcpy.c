/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:16:54 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/04 17:23:15 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*srccpy;
	unsigned char		*destcpy;
	size_t				c;

	if (!dest && !src && n > 0)
		return (NULL);
	destcpy = (unsigned char *)dest;
	srccpy = (const unsigned char *)src;
	c = 0;
	while (c < n)
	{
		destcpy[c] = srccpy[c];
		c++;
	}
	return (dest);
}
