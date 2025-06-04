/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:21:09 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/04 17:23:28 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destcpy;
	char	*srccpy;
	size_t	c;

	if (!dest && !src && n > 0)
		return (0);
	destcpy = (char *)dest;
	srccpy = (char *)src;
	if (n == 0)
		return (dest);
	if (destcpy > srccpy)
		while (n--)
			destcpy[n] = srccpy[n];
	else
	{
		c = 0;
		while (c < n)
		{
			destcpy[c] = srccpy[c];
			c++;
		}
	}
	return (dest);
}
