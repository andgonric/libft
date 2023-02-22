/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:38:15 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/19 14:40:40 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *str, char c)
{
	int	len;
	int	n;
	int	trigger;

	len = 0;
	n = 0;
	trigger = 0;
	while (str[n] != '\0')
	{
		if (str[n] != c && trigger == 0)
		{
			len++;
			trigger = 1;
		}
		else if (str[n] == c)
			trigger = 0;
		n++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		cnt1;
	int		cnt2;
	int		p;

	p = 0;
	str = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (str == 0)
		return (NULL);
	cnt1 = 0;
	while (s[cnt1])
	{
		while (s[cnt1] == c && s[cnt1])
			cnt1++;
		if (s[cnt1] == '\0')
			break ;
		cnt2 = cnt1;
		while (s[cnt1] != c && s[cnt1])
			cnt1++;
		str[p++] = ft_substr(s, cnt2, cnt1 - cnt2);
	}
	str[p] = NULL;
	return (str);
}
