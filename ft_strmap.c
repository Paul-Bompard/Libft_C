/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 06:41:06 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:37:46 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*save;
	int		i;

	i = 0;
	save = (char *)malloc(sizeof(*save) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		save[i] = f(s[i]);
		i++;
	}
	save[i] = '\0';
	return (save);
}
