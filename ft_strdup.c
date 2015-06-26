/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 09:22:30 by pbompard          #+#    #+#             */
/*   Updated: 2015/01/27 11:59:45 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *)malloc(sizeof(*dup) * ft_strlen(s));
	if (dup == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
