/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:45:41 by victorianro       #+#    #+#             */
/*   Updated: 2019/11/12 16:28:36 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memalloc2(size_t size)
{
	void	*temp;

	if (!(temp = malloc(size)))
		return (NULL);
	ft_bzero(temp, size);
	return (temp);
}

void		*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (!(tab = (void*)ft_memalloc2(size * nmemb)))
		return (NULL);
	return (tab);
}
