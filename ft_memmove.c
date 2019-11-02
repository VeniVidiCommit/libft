/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:31:45 by viroques          #+#    #+#             */
/*   Updated: 2019/11/02 19:29:58 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	tmp_dest = (unsigned char*)dest;
	tmp_src = (unsigned char*)src;
	if (tmp_dest < tmp_src)
		ft_memcpy(dest, src, n);
	else
	{
		tmp_dest += n;
		tmp_src += n;
		while (n--)
			*--tmp_dest = *--tmp_src;
	}
	return (dest);
}
