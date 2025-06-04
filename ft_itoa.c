/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:41:31 by vfranta           #+#    #+#             */
/*   Updated: 2025/06/03 17:20:31 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int				c;
	unsigned int	num;

	if (n == 0)
		return (1);
	c = 1;
	if (n < 0)
	{
		num = -n;
		c++;
	}
	else
		num = n;
	while (num > 9)
	{
		num = num / 10;
		c++;
	}
	return (c);
}

static void	ft_putnum(long n, char *str, int *i)
{
	if (n > 9)
	{
		ft_putnum(n / 10, str, i);
		ft_putnum(n % 10, str, i);
	}
	else
	{
		str[*i] = n + '0';
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	char	*out;
	int		c;
	long	num;

	num = n;
	out = malloc(sizeof(char) * (ft_numlen(num) + 1));
	if (!out)
		return (NULL);
	c = 0;
	if (num < 0)
	{
		out[c] = '-';
		num = num * -1;
		c++;
	}
	ft_putnum(num, out, &c);
	out[c] = '\0';
	return (out);
}
