/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:22:19 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:59:19 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int sbl, size_t n)
{
	size_t			c;
	unsigned char	*st;

	c = 0;
	st = (unsigned char *)str;
	while (c < n)
		st[c++] = (unsigned char)sbl;
	return (str);
}
