/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:31:45 by viroques          #+#    #+#             */
/*   Updated: 2019/10/08 14:15:57 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *tmp_dest;
	unsigned char *tmp_src;
	size_t len_dest;
	size_t len_src;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_src < len_dest)
	{
		while (n--)
			tmp_dest[n] = tmp_src[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}