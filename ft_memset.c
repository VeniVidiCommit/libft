/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:36:11 by viroques          #+#    #+#             */
/*   Updated: 2019/11/12 16:35:11 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;

	str = (unsigned char*)s;
	i = 0;
	while ((size_t)i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
