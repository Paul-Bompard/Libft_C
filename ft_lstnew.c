/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 11:25:44 by pbompard          #+#    #+#             */
/*   Updated: 2015/01/27 11:25:45 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newelem;

	newelem = (t_list *)malloc(sizeof(t_list));
	if (!newelem)
		return (NULL);
	if (!content)
	{
		newelem->content = NULL;
		newelem->content_size = 0;
	}
	else
	{
		newelem->content = malloc(content_size);
		if (!newelem->content)
			return (NULL);
		ft_memcpy(newelem->content, content, content_size);
		newelem->content_size = content_size;
	}
	newelem->next = NULL;
	return ((t_list *)newelem);
}
