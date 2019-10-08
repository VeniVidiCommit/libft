/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:47:14 by viroques          #+#    #+#             */
/*   Updated: 2019/10/08 17:24:27 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	s = s + ft_strlen(s);
	while (s--)
	{
		if (*s == c)
			return ((char*)s);
	}
	return (NULL);
}