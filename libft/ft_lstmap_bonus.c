/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedebies <nedebies@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:35:53 by nedebies          #+#    #+#             */
/*   Updated: 2021/03/17 20:35:55 by nedebies         ###   ########.fr       */
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
