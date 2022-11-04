/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:59:10 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:58:20 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	char	sbl;
	int		str_leng;

	s = (char *)str;
	sbl = (char)c;
	str_leng = ft_strlen(s);
	while (str_leng >= 0)
	{
		if (s[str_leng] == sbl)
			return (&s[str_leng]);
	str_leng--;
	}
	return (NULL);
}
