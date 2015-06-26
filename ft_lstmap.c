/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 11:25:32 by pbompard          #+#    #+#             */
/*   Updated: 2015/01/27 11:25:33 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*maplst;
	t_list		*maplst_iter;
	t_list		*mapelem;

	if (!f || !lst)
		return (NULL);
	mapelem = (*f)(lst);
	maplst = ft_lstnew(mapelem->content, mapelem->content_size);
	if (!maplst)
		return (NULL);
	maplst_iter = maplst;
	lst = lst->next;
	while (lst)
	{
		mapelem = (*f)(lst);
		maplst_iter->next = ft_lstnew(mapelem->content, mapelem->content_size);
		if (!maplst_iter->next)
			return (NULL);
		maplst_iter = maplst_iter->next;
		lst = lst->next;
	}
	return (maplst);
}
