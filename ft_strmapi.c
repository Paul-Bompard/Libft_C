/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 06:43:13 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:38:22 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*save;

	i = 0;
	save = (char *)malloc(sizeof(*save) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		save[i] = f(i, s[i]);
		i++;
	}
	save[i] = '\0';
	return (save);
}
