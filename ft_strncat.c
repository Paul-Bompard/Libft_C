/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:17:09 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:38:48 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char			*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
