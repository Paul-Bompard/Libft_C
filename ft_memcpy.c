/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 16:17:20 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:34:34 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void					*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((char *)d);
}
