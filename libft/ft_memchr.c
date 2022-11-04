/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:14:26 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:59:29 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;	

	s = (unsigned char *)str;
	if (n == 0)
		return (NULL);
	while (n > 0 || !str)
	{
		if (*s == (unsigned char)c)
			return (s);
	s++;
	n--;
	}
	return (NULL);
}
