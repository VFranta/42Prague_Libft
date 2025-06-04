/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:29:54 by vfranta           #+#    #+#             */
/*   Updated: 2025/05/22 19:19:25 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//out = ft_strlen(src);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	c;
	int		out;

	c = 0;
	out = 0;
	while (src[out])
		out++;
	if (size == 0)
		return (out);
	while (c < size - 1 && src[c])
	{
		dst[c] = src[c];
		c++;
	}
	if (size > c)
		dst[c] = '\0';
	return (out);
}
