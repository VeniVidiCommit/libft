/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:47:45 by viroques          #+#    #+#             */
/*   Updated: 2019/11/01 19:59:17 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_remove(char c, const char *set)
{
	size_t		i;
	size_t		len;

	len = ft_strlen(set);
	i = 0;
	while (i < len)
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
	while (set && len > 1 && ft_remove(s1[len - 1], set))
		len--;
	if (i > len)
		str = ft_calloc(1, 1);
	else
		str = ft_substr(s1, i, len - i);
	return (str);
}
