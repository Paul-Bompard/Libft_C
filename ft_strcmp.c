/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 19:27:04 by pbompard          #+#    #+#             */
/*   Updated: 2013/12/01 21:24:46 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 < *s2 || *s1 > *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
