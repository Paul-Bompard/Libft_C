/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 18:41:29 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:42:23 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 != '\0')
	{
		if (ft_strncmp((char *)s1, (char *)s2, ft_strlen((char *)s2)) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
