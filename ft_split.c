/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:59:34 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/03 17:36:18 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_len(int cp, char const *str, char sep)
{
	size_t	len;

	len = 0;
	while (str[cp] != sep && str[cp] != '\0')
	{
		len++;
		cp++;
	}
	return (len);
}

static int	ft_word_count(char const *str, char sep)
{
	int	count;
	int	i;
	int	nw;

	count = 0;
	i = 0;
	nw = 1;
	while (str[i])
	{
		if (str[i] != sep && nw)
		{
			count++;
			nw = 0;
		}
		else if (str[i] == sep && !nw)
			nw = 1;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	size_t	cp;
	size_t	cw;
	size_t	cwlen;

	cp = 0;
	cw = 0;
	final = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!final)
		return (NULL);
	while (s[cp])
	{
		if (s[cp] != c)
		{
			cwlen = ft_word_len(cp, s, c);
			final[cw] = ft_substr(s, cp, cwlen);
			cw++;
			cp = cp + cwlen;
		}
		else
			cp++;
	}
	final[cw] = 0;
	return (final);
}
