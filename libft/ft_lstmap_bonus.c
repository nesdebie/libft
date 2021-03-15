/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndebiesm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:52:50 by ndebiesm          #+#    #+#             */
/*   Updated: 2019/10/24 14:21:44 by ndebiesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (lst && f && del)
	{
		while (lst)
		{
			if ((new = ft_lstnew(f(lst->content))))
				ft_lstadd_back(&new, new);
			else
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			lst = lst->next;
		}
		return (new);
	}
	return (NULL);
}
