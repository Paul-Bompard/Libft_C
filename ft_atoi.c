/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:23:45 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:29:02 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int			ft_atoi(const char *str)
{
	int		res;
	int		i;
	int		sign;

	sign = 1;
	res = 0;
	i = 0;
	if (*str == '\0')
		return (res * sign);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
		if (ft_isdigit(str[i]) == 0)
			return (0);
	}
	while (ft_isdigit(str[i]) == 1)
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
