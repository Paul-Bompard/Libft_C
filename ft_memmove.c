/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 16:21:26 by pbompard          #+#    #+#             */
/*   Updated: 2015/01/27 11:56:34 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*save;

	save = (char *)malloc(sizeof(*save) * ft_strlen(src));
	ft_memcpy (save, src, n);
	ft_memcpy (dest, save, n);
	return (dest);
}
