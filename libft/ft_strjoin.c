/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:28:06 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:58:36 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len1;
	int		len2;

	len1 = strlen((char *)s1);
	len2 = strlen((char *)s2);
	str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	len1 = 0;
	while (s1[len1])
	{
		str[len1] = s1[len1];
	len1++;
	}
	len2 = 0;
	while (s2[len2])
		str[len1++] = s2[len2++];
	str[len1] = '\0';
	return (str);
}
