/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:29:40 by viroques          #+#    #+#             */
/*   Updated: 2019/11/12 16:55:37 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen((char*)src));
	i = 0;
	while (i < size - 1 && src[i])
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	((char*)dest)[i] = '\0';
	return (ft_strlen(((char*)src)));
}
