/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndebiesm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:43:47 by ndebiesm          #+#    #+#             */
/*   Updated: 2019/10/10 17:31:42 by ndebiesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t n)
{
	unsigned int i;
	unsigned int j;

	if (dest == NULL)
		return (0);
	i = ft_strlen(dest);
	j = 0;
	while ((j + i + 1) < n && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	j = ft_strlen(src);
	if (n == 0)
		return (j);
	if (i < n)
		return (i + j);
	else
		return (n + j);
	return (n);
}
