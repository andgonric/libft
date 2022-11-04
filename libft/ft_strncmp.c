/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:04:27 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:58:26 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	c;

	c = 0;
	while (str1[c] && str2[c] && c < n)
	{
		if (str1[c] != str2[c])
			return ((unsigned char)str1[c] - (unsigned char)str2[c]);
		c++;
	}	
	if (c != n)
		return ((unsigned char)str1[c] - (unsigned char)str2[c]);
	return (0);
}
