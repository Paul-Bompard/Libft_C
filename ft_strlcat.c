/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:31:57 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:37:18 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		s1;
	size_t		s2;

	s1 = ft_strlen(dest);
	s2 = ft_strlen(src);
	if (s1 <= size)
		s2 = s2 + s1;
	if (s1 > size)
		return (s2 + size);
	while (size > s1 + 1 && src != '\0')
	{
		dest[s1] = *src;
		src++;
		s1++;
	}
	dest[s1] = '\0';
	return (s2);
}
