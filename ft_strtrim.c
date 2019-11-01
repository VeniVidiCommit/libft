/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:47:45 by viroques          #+#    #+#             */
/*   Updated: 2019/10/31 22:52:58 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_remove(char c, const char *set)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(set);
	while (i <= len)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	size_t			i;
	size_t			j;
	size_t			len;

	j = 0;
	i = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (set && ft_remove(s1[i], set))
		i++;
	while (set && ft_remove(s1[len - 1], set))
		len--;
	if (len < i)
	{
		if (!(str = malloc(sizeof(char) * 1)))
			return (NULL);
		str[0] = '\0';
	}
	else
		str = ft_substr(s1, i, len);
	return (str);
}
