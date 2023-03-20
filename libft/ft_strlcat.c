/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nesdebie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:39:17 by nedebies          #+#    #+#             */
/*   Updated: 2023/03/20 10:32:44 by nesdebie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t n)
{
	size_t	dest_len;
	size_t	i;
	size_t	tmp;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] && (i + dest_len + 1) < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (!src[i])
		dest[dest_len + i] = 0;
	tmp = i;
	i = ft_strlen(src);
	if (n == 0)
		return (i);
	if (dest_len < n)
	{
		dest[tmp + dest_len] = 0;
		return (dest_len + i);
	}
	return (n + i);
}
