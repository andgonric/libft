/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:44:23 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:59:24 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			c;
	unsigned char	*dst;
	unsigned char	*source;

	if (dest == NULL && src == NULL)
		return (NULL);
	c = 0;
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (c < n)
	{
		*((char *)dst + c) = *((char *)source + c);
		c++;
	}
	return (dst);
}
