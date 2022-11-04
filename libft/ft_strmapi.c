/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:50:35 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 22:08:35 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		c;
	int		len;

	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	c = 0;
	while (s[c])
	{
		str[c] = f(c, s[c]);
		c++;
	}
	str[c] = '\0';
	return (str);
}
