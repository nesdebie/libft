/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nesdebie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:56:19 by nesdebie          #+#    #+#             */
/*   Updated: 2023/03/28 22:56:30 by nesdebie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*dest;

	dest = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new)
			ft_lstadd_back(&dest, new);
		else
		{
			ft_lstclear(&dest, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (dest);
}