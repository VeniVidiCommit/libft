/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:06:57 by viroques          #+#    #+#             */
/*   Updated: 2019/10/07 16:46:35 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main(void)
{
	void		*s;
	int			c;
	size_t		n;
	char dest[10];
	char src[] = "bonjourr";	
	c = 48;
	n = 5;
	s = malloc(6);
	/* memset
	s = ft_memset(s, c, n);
	printf("%s\n", (char*)s);
	*/
	/*
	ft_bzero((char*)s, n);
	printf("%s\n", s);	
	*/
	printf("%s\n", ft_memcpy(dest, src, n));
}