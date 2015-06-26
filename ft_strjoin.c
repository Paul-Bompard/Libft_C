/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 14:06:19 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:36:44 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*save0;
	char		*save;
	size_t		cat;

	save0 = (char *)s2;
	save = (char *)s1;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	cat = ft_strlen(s1) + ft_strlen(s2);
	if ((save0 = ft_strnew(cat + 1)) == NULL)
		return (NULL);
	save0 = ft_strcat(save0, s1);
	if ((save = ft_strnew(cat + 1)) == NULL)
		return (NULL);
	save = ft_strcat(save, s2);
	save = ft_strcat(save0, save);
	save[cat] = '\0';
	return (save);
}
