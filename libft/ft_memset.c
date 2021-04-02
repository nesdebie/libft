/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedebies <nedebies@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:36:49 by nedebies          #+#    #+#             */
/*   Updated: 2021/04/02 00:17:28 by nedebies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	char			*arr;

	if (str == NULL)
		return (0);
	arr = (char *)str;
	i = 0;
	while (i < n)
	{
		arr[i] = c;
		i++;
	}
	return (&arr[0]);
}
