/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:38:30 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/03 17:18:57 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_stringlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c])
		c++;
	return (c);
}

static void	*ft_memcopy(void *dest, const void *src, size_t n)
{
	const unsigned char	*srccpy;
	unsigned char		*destcpy;
	size_t				c;

	if ((dest == NULL || src == NULL) && n > 0)
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	stlen;

	stlen = ft_stringlen(s);
	if (start >= stlen)
	{
		out = malloc(1);
		if (!out)
			return (NULL);
		out[0] = '\0';
		return (out);
	}
	if (len > stlen - start)
		len = stlen - start;
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	ft_memcopy(out, &s[start], len);
	out[len] = '\0';
	return (out);
}
