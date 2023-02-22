/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:20:30 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/08 22:04:23 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str(int len, unsigned int s)
{
	int	r;

	r = -1;
	if (len == 0)
		r = 0;
	if ((unsigned int)len <= s)
		r = 1;
	return (r);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	int				c;
	unsigned int	sl;

	sl = ft_strlen(s);
	c = ft_str(sl, start);
	if (c == 1)
	{
		str = malloc(1 * sizeof(char));
		if (str == 0)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len >= sl)
		str = malloc(((sl - start) + 1) * sizeof(char));
	if (len < sl)
		str = malloc((len + 1) * sizeof(char));
	if (str == 0 || c == 0)
		return (NULL);
	c = 0;
	while ((unsigned int)c < len && s[start])
		str[c++] = s[start++];
	str[c] = '\0';
	return (str);
}
