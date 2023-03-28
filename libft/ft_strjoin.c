/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nesdebie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:03:42 by nesdebie          #+#    #+#             */
/*   Updated: 2023/03/28 23:03:49 by nesdebie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char				*str;
	unsigned int		i;

	i = 0;
	if (!str1 || !str2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2)) + 1);
	if (!str)
		return (NULL);
	while (*str1)
		str[i++] = *str1++;
	while (*str2)
		str[i++] = *str2++;
	str[i] = 0;
	return (str);
}
