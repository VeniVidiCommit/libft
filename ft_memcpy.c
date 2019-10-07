/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:26:40 by viroques          #+#    #+#             */
/*   Updated: 2019/10/07 16:41:15 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*tmp_dest;
	char	*tmp_src;

	tmp_dest = (char*)dest;
	tmp_src = (char*)src;
	i = 0;
	while (n--)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
