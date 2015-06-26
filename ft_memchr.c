/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 15:51:50 by pbompard          #+#    #+#             */
/*   Updated: 2013/12/01 21:15:28 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *src;

	src = (const unsigned char *)s;
	if (s == NULL)
		return (NULL);
	while (n != 0)
	{
		if (*src == (unsigned char)c)
			return ((void *)src);
		++src;
		n--;
	}
	return (NULL);
}
