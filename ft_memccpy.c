/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 16:03:19 by pbompard          #+#    #+#             */
/*   Updated: 2015/01/27 11:55:12 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char			*d;
	const char		*s;
	char			cs;

	d = dest;
	s = src;
	while (n != 0)
	{
		*d++ = cs;
		cs = *s++;
		if (cs == (char)c)
			return (d);
		n--;
	}
	return (NULL);
}
