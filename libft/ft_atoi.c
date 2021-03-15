/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndebiesm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 08:34:58 by ndebiesm          #+#    #+#             */
/*   Updated: 2019/10/16 16:30:02 by ndebiesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_isovermaxmin(int sign, unsigned long value)
{
	if (sign == 1 && value > 2147483647)
		return (-1);
	if (sign == -1 && value > 2147483648)
		return (0);
	return (sign * value);
}

int				ft_atoi(char const *str)
{
	int					i;
	int					sign;
	unsigned long		res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	if (str[i] < 48 || str[i] > 57)
		return (0);
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (ft_isovermaxmin(sign, res));
}
