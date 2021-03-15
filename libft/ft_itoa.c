/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndebiesm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:22:49 by ndebiesm          #+#    #+#             */
/*   Updated: 2019/10/14 14:17:48 by ndebiesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intsize(int n)
{
	int		size;

	if (n == 0)
		return (1);
	size = 0;
	if (n == -2147483648)
		n = n + 1;
	if (n < 0)
	{
		n = n * (-1);
		size++;
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char	*nb;
	int		len;
	char	tmp;
	int		t;

	t = n;
	len = ft_intsize(n);
	if (!(nb = malloc(sizeof(char) * (len + 1))))
		return (0);
	nb[len] = '\0';
	if (n == -2147483648)
		n = n + 1;
	if (n < 0)
		n = n * (-1);
	while (len-- > 0)
	{
		tmp = n % 10 + '0';
		n = n / 10;
		nb[len] = tmp;
	}
	if (t < 0)
		nb[0] = '-';
	if (t == -2147483648)
		nb[ft_intsize(t) - 1] = nb[ft_intsize(t) - 1] + 1;
	return (nb);
}
