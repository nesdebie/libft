/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndebiesm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:15:26 by ndebiesm          #+#    #+#             */
/*   Updated: 2019/10/17 11:23:12 by ndebiesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n && str)
	{
		if (*(char *)str == c)
			return ((char *)str);
		str++;
		i++;
	}
	return (NULL);
}
