/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:09:37 by viroques          #+#    #+#             */
/*   Updated: 2019/10/08 12:49:14 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *tmp_dest;
	unsigned char *tmp_src;
	unsigned char tmp_c;
	int i;

	i = 0;
	tmp_dest = (unsigned char*)dest;
	tmp_src = (unsigned char*)src;
	tmp_c = (unsigned char)c;
	while (n--)
	{
		tmp_dest[i] = tmp_src[i];
		if (tmp_src[i] == c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}