/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:26:49 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 21:00:53 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	np;
	int	ret;

	np = 1;
	c = 0;
	ret = 0;
	while ((str[c] >= 9 && str[c] <= 13) || str[c] == ' ')
		c++;
	if (str[c] == '-')
	{
		np = -1;
		c++;
	}
	else if (str[c] == '+')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		ret *= 10;
		ret += str[c] - 48;
	c++;
	}
	return (ret * np);
}
