/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedebies <nedebies@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:46:35 by nedebies          #+#    #+#             */
/*   Updated: 2021/03/18 09:46:36 by nedebies         ###   ########.fr       */
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
