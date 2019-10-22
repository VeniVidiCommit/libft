/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:31:29 by viroques          #+#    #+#             */
/*   Updated: 2019/10/22 14:59:46 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char found;

	str = (unsigned char*)s;
	found = (unsigned char)c;
	while (n--)
	{
		if (*str == found)
			return (str);
		str++;
	}
	return (NULL);
}
