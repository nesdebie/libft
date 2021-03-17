/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedebies <nedebies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:28:52 by nedebies          #+#    #+#             */
/*   Updated: 2021/03/17 20:28:54 by nedebies         ###   ########.fr       */
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
		while (str[i + j] == tofind[j] && (i + j) < n && str[i + j])
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
