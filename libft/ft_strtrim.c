/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:53:22 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/02 21:26:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		c;
	int		c1;

	c = ft_strlen(s1);
	str = malloc(c * sizeof(char));
	if (str == 0)
		return (NULL);
	c = 0;
	c1 = 0;
	while (s1[c] == set[c])
		c++;
	while (s1[c] != set[c] && s1[c + 1] != set[c])
	{
		str[c1++] = s1[c++];
	}
	while (str[c1])
	{
		str[c1] = '\0';
		c1++;
	}
	return (str);
}
