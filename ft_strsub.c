/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 09:53:53 by pbompard          #+#    #+#             */
/*   Updated: 2015/01/27 12:07:12 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*save;

	if (s == NULL)
		return (NULL);
	if ((save = ft_strnew(len)) == NULL)
		return (NULL);
	save = (char *)ft_memcpy(save, s + start, len);
	return (save);
}
