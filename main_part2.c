/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_part2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:15:21 by viroques          #+#    #+#             */
/*   Updated: 2019/10/13 23:06:09 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

int     main(void)
{
	// char const s[] = "hellow my friend";
	// unsigned int start = 4;
	// size_t len = ft_strlen(s);

	// printf("%s\n", ft_substr(s, start, UINT32_MAX + 1));
	// char const s1[] = "helloz";
	// char const s2[] = "yeah my frined";
	// printf("%s\n", ft_strjoin(s1, s2));

	//ft_strtrim
	// char s1[] = "0123bonjour le01 mo01";
	// char set[] = "0123";
	
	// printf("%s\n", ft_strtrim(s1, set));

	//ft_split
	// char s[] = "";
	// char c = ' ';
	// int i = 0;
	// char	**tab;
	// tab = ft_split(s, c);
	// while (tab[i])
	// {
	// 	printf("%s\n", tab[i]);
	// 	i++;
	// 
	// ft_itoa
	// int n = 150;
	// printf("%s\n", ft_itoa(n));

// 	char s[] = "bonjourn es amnis";
// 	ft_putendl_fd(s,1);
	ft_putnbr_fd(INT_MIN, 1);

}