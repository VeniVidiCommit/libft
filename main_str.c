/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:14:00 by viroques          #+#    #+#             */
/*   Updated: 2019/10/08 18:25:17 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

int		main(void)
{
	/*
	char s1[] = "0123456789abcadef";
	int c = 'a';

	printf(" %s %10s\n", strchr(s1,c), strrchr(s1,c));
	printf(" %s %10s\n", ft_strchr(s1,c), ft_strrchr(s1,c));
	*/
	char s1[10];
	char s2[10];
	// ft_bzero(s1, sizeof(s1));
	// ft_bzero(s2, sizeof(s2));
	ft_memset(s1, 'a', 10);
	ft_memset(s2, 'a', 10);
	 s1[1] = 'q';
	printf(" %d\n", strncmp(s1, s2, 5));
	printf(" %d\n", ft_strncmp(s1, s2, 5));
}