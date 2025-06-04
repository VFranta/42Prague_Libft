/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:41:51 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/03 17:20:42 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//slen = ft_strlen(src);
//dlen = ft_strlen(dest);

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	n;
	size_t	dlen;
	size_t	slen;

	c = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	n = dlen;
	if (dstsize < 1)
		return (slen + dstsize);
	while (src[c] != '\0' && n < (dstsize - 1))
	{
		dest[n] = src[c];
		c++;
		n++;
	}
	dest[n] = '\0';
	if (dstsize < dlen)
		return (slen + dstsize);
	else
		return (dlen + slen);
}
