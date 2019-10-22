/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:39:29 by viroques          #+#    #+#             */
/*   Updated: 2019/10/22 20:57:23 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#define ERROR(x) (x != 0 ? printf("\033[0;31mKO\e[0m\n") : printf("\033[0;32mOK\e[0m\n"))
#define ERROR_INT(x,y) (x != y ? printf("\033[0;31mKO\e[0m\n") : printf("\033[0;32mOK\e[0m\n"))

int		main(int ac, char **argv)
{
	if ( ac == 2)
	{
		char s[100];
		char s1[100];
		void *ori;
		void *me;
		char empty[] = "";
		int c = '1';
		size_t n = 30;
	
		ori = memset(s, c, n);
		me = ft_memset(s1, c, n);
		printf("\nft_memset TEST\n");
		ERROR(strncmp(ori, me, n));

		//MEMCPY
		char dest[100] = " les amis";
		char src[100] = "Salut";
		char *dest1 = dest;
		char *src1 = src;

		me = ft_memcpy(dest1, src1, n);
		ori = memcpy(dest, src, n);
		printf("\nft_memcpt TEST\n");
		ERROR(strncmp(ori, me, n));

		//MEMCCPY
		c = 'l';
		me = ft_memccpy(dest1, src1, c, n);
		ori = memccpy(dest, src, c, n);
		printf("\nft_memccpy TEST\n");
		ERROR(strncmp(ori, me, n));

		//MEMMOVE
		me = ft_memmove(dest1, src1, n);
		ori = memmove(dest, src, n);
		printf("\nft_memmove TEST\n");
		ERROR(strncmp(ori, me, n));

		//memchr
		char found[] = "You need to found M, you will never found me";
		c = 'M';
		me = ft_memchr(found, c, n);
		ori = memchr(found, c, n);
		printf("\nft_memchr TEST\n");
		ERROR(strncmp(ori, me, n));
		char found1[] = "";
		me = ft_memchr(found, c, n);
		ori = memchr(found, c, n); 
		ERROR(strncmp(ori, me, n));

		//memcmp
		char test_cmp[] = "You need to Found Me";
		int me_int;
		int ori_int;
		
		me_int = ft_memcmp(found, test_cmp, n);
		ori_int = memcmp(found, test_cmp, n);
		printf("\nft_memcmp TEST\n");
		ERROR_INT(ori_int, me_int);

		//strlen
		size_t me_size;
		size_t ori_size;

		printf("\nft_strlen TEST\n");
		me_size = ft_strlen(found);
		ori_size = strlen("");
		ERROR_INT(me_size, ori_size);
		me_size = ft_strlen(empty);
		ori_size = strlen(empty);
		printf("%zu %zu", me_size, ori_size);
		ERROR_INT(ori_int, me_int);

	}
}
