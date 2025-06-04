/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:54:21 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/03 17:20:55 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//last ocurance of c in string s
//i = ft_strlen(s);

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if ((unsigned char)s[i] == uc)
			return ((char *)(&s[i]));
		i--;
	}
	return (0);
}
