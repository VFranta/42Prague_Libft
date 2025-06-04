/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:10:03 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/03 17:20:16 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//first ocurance of char c in string s

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	uc;

	uc = (unsigned char)c;
	str = (char *)s;
	while (*str != uc && *str != '\0')
		str++;
	if ((unsigned char)*str == uc)
		return (str);
	else
		return (NULL);
}
