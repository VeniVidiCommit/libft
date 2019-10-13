/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:47:45 by viroques          #+#    #+#             */
/*   Updated: 2019/10/13 18:37:42 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_remove(char c, const char *set)
{
	unsigned int i;

	i = 0;
	while (set[i])
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
	unsigned int 	i;
	unsigned int 	j;
	size_t			len;

	j = 0;
	i = 0;
	len = ft_strlen(s1) - 1;
	while (ft_remove(s1[i], set))
		i++;
	while (ft_remove(s1[len], set))
		len--;
	str = ft_substr(s1, i, len);
	return (str);
}