/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:16:17 by vfranta           #+#    #+#             */
/*   Updated: 2025/05/21 21:29:32 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*retstr;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	retstr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!retstr)
		return (NULL);
	while (s[i])
	{
		retstr[i] = f(i, s[i]);
		i++;
	}
	retstr[i] = '\0';
	return (retstr);
}
