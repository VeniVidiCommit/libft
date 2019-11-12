/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:09:37 by viroques          #+#    #+#             */
/*   Updated: 2019/11/12 16:34:07 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*str;
	unsigned char	*str2;

	i = 0;
	str = (unsigned char*)dest;
	str2 = (unsigned char*)src;
	while ((size_t)i < n)
	{
		str[i] = str2[i];
		if (str[i] == (unsigned char)c)
			return ((void*)&dest[i + 1]);
		i++;
	}
	return (NULL);
}
