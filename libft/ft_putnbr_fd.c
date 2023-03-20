/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nesdebie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:37:11 by nedebies          #+#    #+#             */
/*   Updated: 2023/03/20 10:45:48 by nesdebie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_putchar(int nb)
{
	char	n;

	n = nb + '0';
	return (n);
}

void	ft_putnbr_fd(int nb, int fd)
{
	char	nbr;

	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	if (nb < 0 && nb > -2147483648)
	{
		write(fd, "-", 1);
		nb = nb * (-1);
	}
	if (nb < 10 && nb >= 0)
	{
		nbr = ft_putchar(nb);
		write(fd, &nbr, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putnbr_fd((nb % 10), fd);
	}
}
