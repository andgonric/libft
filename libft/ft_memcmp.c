/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:24:36 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:59:27 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				cnt;
	const unsigned char	*s1;
	const unsigned char	*s2;

	cnt = 0;
	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while (cnt < n)
	{
		if (s1[cnt] < s2[cnt])
			return (-1);
		if (s1[cnt] > s2[cnt])
			return (1);
	cnt++;
	}
	return (0);
}
