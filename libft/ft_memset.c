/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndebiesm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:32:55 by ndebiesm          #+#    #+#             */
/*   Updated: 2019/10/11 09:34:43 by ndebiesm         ###   ########.fr       */
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
