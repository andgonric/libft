/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:25:18 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:58:34 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	res;
	size_t	c;
	size_t	leng_dst;
	size_t	leng_src;
	char	*s;

	leng_src = ft_strlen((char *)src);
	leng_dst = ft_strlen(dest);
	if (size > leng_dst)
		res = leng_src + leng_dst;
	else
		res = leng_src + size;
	s = (char *)src;
	c = 0;
	while (s[c] && (leng_dst + 1) < size)
	{
		dest[leng_dst] = s[c];
		leng_dst++;
		c++;
	}
	dest[leng_dst] = '\0';
	return (res);
}
