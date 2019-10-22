/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:31:45 by viroques          #+#    #+#             */
/*   Updated: 2019/10/22 14:50:41 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			len_dest;
	size_t			len_src;

	tmp_dest = (unsigned char*)dest;
	tmp_src = (unsigned char*)src;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_src < len_dest)
	{
		while (n--)
		{
			*tmp_dest = *tmp_src;
			tmp_dest++;
			tmp_src++;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
