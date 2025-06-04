/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:43:20 by vfranta           #+#    #+#             */
/*   Updated: 2025/05/23 15:50:33 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_equal(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	spos;
	size_t			len;

	spos = 0;
	while (s1[spos] && ft_find_equal(s1[spos], set))
		spos++;
	len = ft_strlen(s1) - 1;
	while (ft_find_equal(s1[len], set) && len > 0)
		len--;
	len = len - spos + 1;
	return (ft_substr(s1, spos, len));
}
