/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 06:26:10 by pbompard          #+#    #+#             */
/*   Updated: 2015/04/03 11:36:28 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	while (*s != '\0')
	{
		f(index, &*s);
		s++;
		index++;
	}
}
