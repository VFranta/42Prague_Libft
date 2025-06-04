/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:41:04 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/04 17:24:53 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		if (s1[c] != s2[c]
			|| (s1[c] == 0 || s2[c] == 0))
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		c ++;
	}
	return (0);
}
