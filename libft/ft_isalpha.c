/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedebies <nedebies@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:34:00 by nedebies          #+#    #+#             */
/*   Updated: 2021/04/01 23:57:49 by nedebies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char my_c;

	my_c = (unsigned char)c;
	if ((my_c >= 65 && my_c <= 90) || (my_c >= 97 && my_c <= 122))
		return (1);
	return (0);
}
