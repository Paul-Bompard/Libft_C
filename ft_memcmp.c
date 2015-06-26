/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 17:25:42 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:34:11 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int					ft_memcmp(const void *dest, const void *src, size_t n)
{
	const char		*d;
	const char		*s;

	d = (const char *)dest;
	s = (const char *)src;
	while (n != 0)
	{
		if (*d == *s)
		{
			d++;
			s++;
		}
		else
			return ((unsigned char)*d - (unsigned char)*s);
		n--;
	}
	return (0);
}
