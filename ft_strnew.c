/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 05:45:35 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:40:02 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*dest;

	dest = (char *)malloc(sizeof(*dest) * size);
	if (dest == NULL)
		return (NULL);
	while (size != 0)
	{
		dest[size] = '\0';
		size--;
	}
	dest[size] = '\0';
	return (dest);
}
