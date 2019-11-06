/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:50:06 by victorianro       #+#    #+#             */
/*   Updated: 2019/11/06 21:12:05 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	n;
	char	*s_copy;

	if (!(s_copy = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	n = 0;
	while (s[n])
	{
		s_copy[n] = s[n];
		n++;
	}
	s_copy[n] = '\0';
	return (s_copy);
}
