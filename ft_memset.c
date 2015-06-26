/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 16:44:23 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:34:54 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memset(void *b, int c, size_t len)
{
	char	*cs;

	cs = (char *)b;
	while (len != 0)
	{
		*cs = (unsigned char)c;
		cs++;
		len--;
	}
	return ((void *)b);
}
