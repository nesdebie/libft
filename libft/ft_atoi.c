/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedebies <nedebies@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:33:12 by nedebies          #+#    #+#             */
/*   Updated: 2021/04/22 10:43:41 by nedebies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isovermaxmin(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(char const *str)
{
	int					i;
	int					sign;
	unsigned long		result;
	unsigned long		max;

	result = 0;
	i = 0;
	max = LONG_MAX / 10;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + str[i] - 48;
		if (result > max)
			return (ft_isovermaxmin(sign));
		i++;
	}
	return ((int)(sign * result));
}
