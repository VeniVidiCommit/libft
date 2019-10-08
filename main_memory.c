/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:06:57 by viroques          #+#    #+#             */
/*   Updated: 2019/10/08 17:58:03 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int     main(void)
{
	void		*s;
	int			c;
	size_t		n;
	char *dest;
	char *dest1 = dest;
	void *src;
	void *src1;

	c = 'k';
//	n = 100;
	s = malloc(6);
	/* memset
	s = ft_memset(s, c, n);
	printf("%s\n", (char*)s);
	*/
	
	//ft_bzero((char*)s, n);
	//printf("%s\n", s);	
	
	// printf("%s\n", memccpy(dest, src, c, n));
	// printf ("%s\n", ft_memccpy(dest1, src1, c, n));
	
	/* MEMMOVE
	printf("ORI %10s\n", memmove(dest, src, n));
	printf("MOI %10s\n", ft_memmove(dest1, src1, n));
	printf ("%d\n", ft_strlen(dest));
	printf ("%d\n", ft_strlen(dest1));
	*/

	// MEMCHAR
	/*
	src = malloc(n);
	src1 = malloc(n);
	src = memchr(dest, c , n);
	src1 = ft_memchr(dest1, c, n);
	printf("ORI %10s\n", (char*)src);
	printf("MOI %10s\n", (char*) src1);
	*/
	// MEMCMP
	/*
	char s1[] = "wefew";
	char s2[] = "1";
	n = sizeof(s2);
	printf("ORI %10d\n", memcmp(s1, s2, n));
	printf("MOI %10d\n", ft_memcmp(s1, s2, n));
	*/
}