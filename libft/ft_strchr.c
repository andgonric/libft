/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:52:48 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:58:41 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;
	char	sbl;

	sbl = (char)c;
	s = (char *)str;
	while (*s != sbl)
	{
		if (*s++ == '\0')
			return (NULL);
	}
	return (s);
}
