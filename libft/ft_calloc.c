/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndebiesm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:44:01 by ndebiesm          #+#    #+#             */
/*   Updated: 2019/10/23 12:42:51 by ndebiesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char				*ptr;
	unsigned int		i;

	i = 0;
	if (n == 0 || size == 0)
	{
		n = 1;
		size = 1;
	}
	ptr = malloc(n * size);
	if (ptr == NULL)
		return (0);
	while (i < (n * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
