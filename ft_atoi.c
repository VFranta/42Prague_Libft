/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfranta <vfranta>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:14:42 by vfranta           #+#    #+#             */
/*   Updated: 2025/05/22 19:41:49 by vfranta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// else if (ft_isalpha(str[i]) && ft_isdigit(str[i + 1]))
// 	return (0);

int	ft_atoi(const char *str)
{
	int	i;
	int	out;
	int	sign;

	i = 0;
	sign = 1;
	out = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	else if ((str[i] >= 'a' && str[i] <= 'z') || ((str[i] >= 'A'
				&& str[i] <= 'Z') && (str[i + 1] > '0' && str[i + 1] < '9')))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = out * 10 + str[i] - '0';
		i++;
	}
	return (out * sign);
}
