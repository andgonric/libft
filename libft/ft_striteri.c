/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:11:43 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/06 19:21:20 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	c;
	int	c1;

	c = 0;
	c1 = ft_strlen(s);
	while (c < c1)
	{
		f(c, s);
		c++;
		s++;
	}
}
