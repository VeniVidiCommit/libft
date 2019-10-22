/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:09:37 by viroques          #+#    #+#             */
/*   Updated: 2019/10/22 19:43:16 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *tmp_dest;
	unsigned char *tmp_src;
	unsigned char tmp_c;

	tmp_dest = (unsigned char*)dest;
	tmp_src = (unsigned char*)src;
	tmp_c = (unsigned char)c;
	while (n--)
	{
		*tmp_dest = *tmp_src;
		if (*tmp_src == c)
			return ((void *)tmp_dest + 1);
		tmp_dest++;
		tmp_src++;
	}
	return (NULL);
}
