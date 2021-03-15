/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndebiesm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:37:13 by ndebiesm          #+#    #+#             */
/*   Updated: 2019/10/17 16:10:43 by ndebiesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char			*str1;
	unsigned char			*str2;
	unsigned int			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (s1 == 0 || s2 == 0)
		return (0);
	while (n > 0 && str1[i] == str2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (str1[i] - str2[i]);
}
