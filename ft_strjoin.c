/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:19:09 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/03 17:18:12 by vfranta          ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*out;
	unsigned int		i;
	unsigned int		j;
	unsigned int		lens1;
	unsigned int		lens2;

	j = 0;
	lens1 = ft_stringlen(s1);
	lens2 = ft_stringlen(s2);
	out = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (i < lens1)
	{
		out[i] = s1[i];
		i++;
	}
	while (j < lens2)
	{
		out[i + j] = s2[j];
		j++;
	}
	out[i + j] = '\0';
	return (out);
}
