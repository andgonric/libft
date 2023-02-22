/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:53:22 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/06 17:06:34 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_init(char const *s, char const *s1)
{
	int	c;
	int	len;

	c = 0;
	len = ft_strlen(s);
	while (c < len)
	{
		if (ft_strchr(s1, s[c]) == 0)
			break ;
		c++;
	}
	return (c);
}

int	ft_end(char const *s, char const *s1)
{
	int	c;
	int	len;

	c = 0;
	len = ft_strlen(s);
	while (c < len)
	{
		if (ft_strchr(s1, s[len - c - 1]) == 0)
			break ;
		c++;
	}
	return (len - c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		init;
	int		end;
	char	*str;

	if (s1 == 0)
		return (NULL);
	if (set == 0)
		return (ft_strdup(s1));
	init = ft_init(s1, set);
	end = ft_end(s1, set);
	if (init >= end)
		return (ft_strdup(""));
	str = malloc((end - init + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	ft_strlcpy(str, s1 + init, end - init +1);
	return (str);
}
