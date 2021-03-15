/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndebiesm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:16:26 by ndebiesm          #+#    #+#             */
/*   Updated: 2019/10/11 14:22:18 by ndebiesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str, char const *tofind, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (str == NULL || tofind == NULL)
		return (0);
	if (ft_strlen(tofind) == 0)
		return ((char *)&str[0]);
	while (i < n)
	{
		while (str[i + j] == tofind[j] && (i + j) < n)
		{
			j++;
			if (tofind[j] == '\0')
				return ((char *)&str[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
