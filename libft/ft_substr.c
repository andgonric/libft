/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:20:30 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/03 23:37:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	c;

	str = (char *)malloc((len + 1) * sizeof(*s));
	if (!str)
		return (NULL);
	c = 0;
	while (c < len)
	{
		str[c] = s[start + c];
		c++;
	}
	str[c] = '\0';
	return (str);
}
