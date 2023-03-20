/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nesdebie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:46:35 by nedebies          #+#    #+#             */
/*   Updated: 2023/03/20 10:35:11 by nesdebie         ###   ########.fr       */
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
