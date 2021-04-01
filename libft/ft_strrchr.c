/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedebies <nedebies@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:39:46 by nedebies          #+#    #+#             */
/*   Updated: 2021/04/02 00:02:38 by nedebies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	int				i;
	unsigned char	my_c;

	my_c = (unsigned char)c;
	if (str == NULL)
		return (0);
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == my_c)
			return ((char *)(&str[i]));
		i--;
	}
	return (NULL);
}
