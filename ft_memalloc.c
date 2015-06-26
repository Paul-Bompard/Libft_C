/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/13 16:37:43 by pbompard          #+#    #+#             */
/*   Updated: 2014/05/13 16:37:44 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	if ((ptr = (char *)malloc(size * sizeof(*ptr))) == NULL)
		return (NULL);
	while (size != 0)
	{
		ptr[size] = '\0';
		size--;
	}
	ptr[size] = '\0';
	return (ptr);
}
