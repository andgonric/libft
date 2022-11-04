/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:06:38 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:58:31 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	len;

	c = 0;
	if (size != 0)
	{
		while (c < size - 1 && src[c] != '\0')
		{
			dst[c] = src[c];
		c++;
		}
	dst[c] = '\0';
	}
	len = ft_strlen((char *)src);
	return (len);
}
