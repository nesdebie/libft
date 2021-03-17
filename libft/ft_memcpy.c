/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedebies <nedebies@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:36:36 by nedebies          #+#    #+#             */
/*   Updated: 2021/03/17 20:36:37 by nedebies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	
	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i < n && d[i] != 0)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
