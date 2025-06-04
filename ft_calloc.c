/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:23:17 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/03 13:24:10 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//ft_bzero(out, nmemb * size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*out;
	size_t	i;
	size_t	c;

	if (nmemb && (size * nmemb) / nmemb != size)
		return ((void *)0);
	out = malloc(sizeof(char) * (nmemb * size));
	if (!out)
		return (NULL);
	i = 0;
	c = nmemb * size;
	while (i < c)
	{
		out[i] = '\0';
		i++;
	}
	return (out);
}
