/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:31:45 by viroques          #+#    #+#             */
/*   Updated: 2019/11/12 16:52:51 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int					i;
	unsigned char		*str;
	const unsigned char	*str2;

	str = (unsigned char*)dest;
	str2 = (unsigned char*)src;
	i = 0;
	if (dest <= src)
		ft_memcpy(dest, src, n);
	else
	{
		str = dest + n - 1;
		str2 = src + n - 1;
		while (n--)
		{
			str[i] = str2[i];
			i--;
		}
	}
	return (dest);
}
