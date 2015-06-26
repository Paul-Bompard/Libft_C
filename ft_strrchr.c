/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 18:26:35 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:41:07 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strrchr(const char *s, int c)
{
	char	*x;

	x = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			x = (char *)s;
		s++;
	}
	if (*s == (char)c && *s == '\0')
	{
		x = (char *)s;
		return (x);
	}
	return (x);
}
