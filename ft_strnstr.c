/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:59:56 by viroques          #+#    #+#             */
/*   Updated: 2019/11/12 16:37:47 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		i2;

	i = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[i] != '\0' && (size_t)i < len)
	{
		i2 = 0;
		if (haystack[i] == needle[0])
		{
			while (haystack[i + i2] == needle[i2] && needle[i2] != '\0' &&
					(size_t)(i + i2) < len)
				i2++;
			if (needle[i2] == '\0')
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (0);
}
