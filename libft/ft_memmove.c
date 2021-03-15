/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndebiesm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:00:31 by ndebiesm          #+#    #+#             */
/*   Updated: 2019/10/17 16:11:36 by ndebiesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == NULL || src == NULL)
		return ((char *)dest);
	if (src == dest)
		return (0);
	i = 0;
	if (src < dest)
	{
		i = n;
		while (i > 0 && (dest != NULL || src != NULL))
		{
			i--;
			d[i] = s[i];
		}
	}
	else if (src > dest)
	{
		while (i < n && (dest != NULL || src != NULL))
		{
			d[i] = s[i];
			i++;
		}
	}
	return ((char *)dest);
}
