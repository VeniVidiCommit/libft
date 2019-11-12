/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:56:10 by victorianro       #+#    #+#             */
/*   Updated: 2019/11/12 16:55:47 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t lens;
	size_t i;

	i = 0;
	lens = ft_strlen(src);
	if (!size)
		return (lens);
	while (*dest && size)
	{
		dest++;
		i++;
		size--;
	}
	while (*src && size > 1)
	{
		*dest++ = *src++;
		size--;
	}
	if (size != 0)
	{
		*dest = '\0';
	}
	return (lens + i);
}
