/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:30:51 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:58:24 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	n;
	size_t	n1;

	if (str2[0] == '\0')
		return ((char *)str1);
	n = 0;
	while (str1[n] != '\0' && n <= len)
	{
		n1 = 0;
		while (str2[n1] == str1[n + n1] && n + n1 < len)
		{
			if (str2[n1 + 1] == '\0')
				return ((char *)str1 + n);
			n1++;
		}
		n++;
	}	
	return (NULL);
}
