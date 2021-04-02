/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedebies <nedebies@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:33:12 by nedebies          #+#    #+#             */
/*   Updated: 2021/04/02 12:41:41 by nedebies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isovermaxmin(int sign, unsigned long value)
{
	if (sign == 1 && value > 2147483647)
		return (-1);
	if (sign == -1 && value > 2147483648)
		return (0);
	return (sign * value);
}

int	ft_atoi(char const *str)
{
	int					i;
	int					sign;
	unsigned long		res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
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
