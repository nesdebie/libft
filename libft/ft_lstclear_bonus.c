/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndebiesm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 09:58:35 by ndebiesm          #+#    #+#             */
/*   Updated: 2019/10/24 14:24:27 by ndebiesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == 0 || del == 0)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		*lst = tmp;
		ft_lstdelone(*lst, del);
		tmp = tmp->next;
	}
	*lst = NULL;
}
