/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:38:15 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 22:44:46 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		len1;
	int		len2;

	len1 = 0;
	while ((char)s[len1] != c)
		len1++;
	len2 = len1;
	while ((char)s[len2])
		len2++;
	len2 -= len1;
	str = malloc((4 + 1) * sizeof(char *));
	while(s[i])
	{
		while(s[i]== c && s[i])
			i++;
		j =  1;
		while (s[i] != c && s[i])
			i++
		split[k] = ft_substr(s, j, i -j);
			k++; 	
	}
	split[k] = NULL;
	str[0] = malloc(len1 * sizeof(char));
	str[1] = malloc(len2 * sizeof(char));
	if (str[0] == 0 || str[1] == 0)
		return (NULL);
	ft_memcpy(str[0], s, len1);
	ft_memcpy(str[1], s, len2);
	return (str);
}

***ola**tudo**ridf**fje*
