/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndebiesm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:18:02 by ndebiesm          #+#    #+#             */
/*   Updated: 2019/10/17 16:10:22 by ndebiesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *str1, char const *str2)
{
	char				*str;
	unsigned int		i;

	i = 0;
	if (str1 == NULL && str2 == NULL)
		return (0);
	if (str1 == NULL)
		return ((char *)str2);
	if (str2 == NULL)
		return ((char *)str1);
	if (!(str = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2)) + 1)))
		return (0);
	while (*str1)
		str[i++] = *str1++;
	while (*str2)
		str[i++] = *str2++;
	str[i] = 0;
	return (str);
}
