/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nesdebie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:04:50 by nesdebie          #+#    #+#             */
/*   Updated: 2023/03/28 23:04:58 by nesdebie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str, char const *tofind, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(tofind);
	if (!j)
		return ((char *)str);
	if (!ft_strlen(str))
		return (NULL);
	while (i < n)
	{
		if (!ft_strncmp((char *)&str[i], tofind, j))
		{
			if (i + j > n)
				return (NULL);
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}