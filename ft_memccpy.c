/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:09:37 by viroques          #+#    #+#             */
/*   Updated: 2019/11/07 00:04:25 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *tmp_dest;
	unsigned char *tmp_src;

	tmp_dest = (unsigned char*)dest;
	tmp_src = (unsigned char*)src;
	if (!(*tmp_src))
		return (NULL);
	while (n-- && *tmp_src != (unsigned char)c)
		*tmp_dest++ = *tmp_src++;
	if (*tmp_src == (unsigned char)c)
	{
		*tmp_dest++ = *tmp_src;
		return ((void *)tmp_dest);
	}
	return (NULL);
}
