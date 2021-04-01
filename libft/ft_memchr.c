/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedebies <nedebies@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:36:23 by nedebies          #+#    #+#             */
/*   Updated: 2021/04/01 23:59:25 by nedebies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	my_c;

	my_c = (unsigned char)c;
	i = 0;
	while (i < n && str)
	{
		if (*(unsigned char *)str == my_c)
			return ((unsigned char *)str);
		str++;
		i++;
	}
	return (NULL);
}
