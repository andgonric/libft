/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:00:17 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:59:22 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			c;

	if (dest == NULL && src == NULL)
		return (NULL);
	c = 0;
	if (src < dest)
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (c < n)
		{
			((char *)dest)[c] = ((char *)src)[c];
			c++;
		}
	}
	return (dest);
}
