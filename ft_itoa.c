/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 11:51:38 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:30:44 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static int		ft_abs(int n)
{
	int		retval;

	retval = (n < 0) ? -n : n;
	return (retval);
}

char			*ft_itoa(int n)
{
	int		len;
	int		integer;
	char	*str;

	str = NULL;
	len = (n < 0) ? 2 : 1;
	integer = n;
	while (integer > 9 || integer < -9)
	{
		len++;
		integer = ft_abs(integer / 10);
	}
	if ((str = (char *)malloc((len + 1) * sizeof(*str))))
	{
		str[len--] = '\0';
		integer = n;
		while (len + 1)
		{
			str[len--] = '0' + ft_abs(integer % 10);
			integer = ft_abs(integer / 10);
		}
		if (n < 0)
			str[0] = '-';
	}
	return (str);
}
