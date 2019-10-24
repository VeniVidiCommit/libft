/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:39:29 by viroques          #+#    #+#             */
/*   Updated: 2019/10/24 20:36:28 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <limits.h>
#include <ctype.h>

#define ERROR_NUL(x, y) (x != y ? printf("\033[0;31mKO\e[0m\n") : printf("\033[0;32mOK\e[0m\n"))
#define ERROR_STR(x) (x != 0 ? printf("\033[0;31mKO\e[0m\n") : printf("\033[0;32mOK\e[0m\n"))
#define ERROR_INT(x,y) (x != y ? printf("\033[0;31mKO\e[0m\n") : printf("\033[0;32mOK\e[0m\n"))

char	mapi(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int		main(int ac, char **argv)
{

	if ( argv[1][0] == '1')
	{
		char s[100];
		char s1[100];
		void *ori;
		void *me;
		int c = '1';
		size_t n = 30;
	
		ori = memset(s, c, n);
		me = ft_memset(s1, c, n);
		printf("\nft_memset TEST\n");
		ERROR_STR(strncmp(ori, me, n));

		//MEMCPY
		char dest[100] = " les amis";
		char src[100] = "Salut";
		char *dest1 = dest;
		char *src1 = src;

		me = ft_memcpy(dest1, src1, n);
		ori = memcpy(dest, src, n);
		printf("\nft_memcpt TEST\n");
		ERROR_STR(strncmp(ori, me, n));

		//MEMCCPY
		c = 'l';
		me = ft_memccpy(dest1, src1, c, n);
		ori = memccpy(dest, src, c, n);
		printf("\nft_memccpy TEST\n");
		ERROR_STR(strncmp(ori, me, n));

		//MEMMOVE
		me = ft_memmove(dest1, src1, n);
		ori = memmove(dest, src, n);
		printf("\nft_memmove TEST\n");
		ERROR_STR(strncmp(ori, me, n));

		//memchr
		char found[] = "You need to found M, you will never found me";
		c = 'M';
		me = ft_memchr(found, c, n);
		ori = memchr(found, c, n);
		printf("\nft_memchr TEST\n");
		ERROR_STR(strncmp(ori, me, n));
		me = ft_memchr("", c, n);
		ori = memchr("", c, n); 
		ERROR_STR(strncmp(ori, me, n));

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
		ori_size = strlen(found);
		ERROR_INT(me_size, ori_size);
		me_size = ft_strlen("");
		ori_size = strlen("");
		ERROR_INT(ori_int, me_int);

		//ft_isalpha
		printf("\nft_isalpha\n");
		me_int = ft_isalpha('s');
		ori_int = isalpha('s');
		ERROR_INT(ori_int, me_int);
		me_int = ft_isalpha('0');
		ori_int = isalpha('0');
		ERROR_INT(ori_int, me_int);
		me_int = ft_isalpha('\t');
		ori_int = isalpha('\t');
		ERROR_INT(ori_int, me_int);

		//ft_isdigit
		printf("\nft_isdigit\n");
		me_int = ft_isdigit('s');
		ori_int = isdigit('s');
		ERROR_INT(ori_int, me_int);
		me_int = ft_isdigit('0');
		ori_int = isdigit('0');
		ERROR_INT(ori_int, me_int);
		me_int = ft_isdigit('\t');
		ori_int = isdigit('\t');
		ERROR_INT(ori_int, me_int);
		//ft_isalnum
		printf("\nft_alnum\n");
		me_int = ft_isalnum('z');
		ori_int = isalnum('z');
		ERROR_INT(ori_int, me_int);
		me_int = ft_isalnum('0');
		ori_int = isalnum('0');
		ERROR_INT(ori_int, me_int);
		me_int = ft_isalnum('\t');
		ori_int = isalnum('\t');
		ERROR_INT(ori_int, me_int);
		//ft_isascii
		printf("\nft_isascii\n");
		me_int = ft_isascii(256);
		ori_int = isascii(256);
		ERROR_INT(ori_int, me_int);
		me_int = ft_isascii('0');
		ori_int = isascii('0');
		ERROR_INT(ori_int, me_int);
		me_int = ft_isascii('\0');
		ori_int = isascii('\0');
		ERROR_INT(ori_int, me_int);
		//ft_isprint
		printf("\nft_isprint\n");
		me_int = ft_isprint(256);
		ori_int = isprint(256);
		ERROR_INT(ori_int, me_int);
		me_int = ft_isprint('T');
		ori_int = isprint('T');
		ERROR_INT(ori_int, me_int);
		me_int = ft_isprint('\n');
		ori_int = isprint('\n');
		ERROR_INT(ori_int, me_int);
		//ft_toupper
		printf("\nft_toupper\n");
		me_int = ft_toupper('a');
		ori_int = toupper('a');
		ERROR_INT(ori_int, me_int);
		me_int = ft_toupper('Z');
		ori_int = toupper('Z');
		ERROR_INT(ori_int, me_int);
		me_int = ft_toupper('\t');
		ori_int = toupper('\t');
		ERROR_INT(ori_int, me_int);
		//ft_tolower
		printf("\nft_tolower\n");
		me_int = ft_tolower('a');
		ori_int = tolower('a');
		ERROR_INT(ori_int, me_int);
		me_int = ft_tolower('Z');
		ori_int = tolower('Z');
		ERROR_INT(ori_int, me_int);
		me_int = ft_tolower('\0');
		ori_int = tolower('\0');
		ERROR_INT(ori_int, me_int);

		//ft_strchr
		printf("\nft_strchr\n");
		me = ft_strchr("Hellow ca va ?Bien Bien", '?');
		ori = strchr("Hellow ca va ?Bien Bien", '?');
		ERROR_STR(strncmp(ori, me, n));
		me = ft_strchr("", 'a');
		ori = strchr("", 'a');
		ERROR_NUL(me, ori);
		me = ft_strchr("Hellow ca va ?Bien Bien", 'z');
		ori = strchr("Hellow ca va ?Bien Bien", 'z');
		ERROR_NUL(me, ori);
		//ft_strrchr
		printf("\nft_strrchr\n");
		me = ft_strrchr("Hellow ca va ?Bien ? Bien ? Totor", '?');
		ori = strrchr("Hellow ca va ?Bien ? Bien ? Totor", '?');
		ERROR_STR(strncmp(ori, me, n));
		me = ft_strrchr("", 'a');
		ori = strrchr("", 'a');
		ERROR_NUL(me, ori);
		me = ft_strrchr("Hellow ca va ?Bien Bien", 'z');
		ori = strrchr("Hellow ca va ?Bien Bien", 'z');
		ERROR_NUL(me, ori);
		//ft_strncmp
		printf("ft_strncmp\n");
		n = 8;
		me_int = ft_strncmp("Bonjour", "Bonrour", n);
		ori_int = strncmp("Bonjour", "Bonrour", n);
		ERROR_INT(me_int, ori_int);
		n = 0;
		me_int = ft_strncmp("Bonjour", "Eonjour", n);
		ori_int = strncmp("Bonjour", "Eonjour", n);
		ERROR_INT(me_int, ori_int);
		n = 8;
		me_int = ft_strncmp("Bonjour", "", n);
		ori_int = strncmp("Bonjour", "", n);
		ERROR_INT(me_int, ori_int);
		n = 8;
		me_int = ft_strncmp("Bonjour", "Bonjour", n);
		ori_int = strncmp("Bonjour", "Bonjour", n);
		ERROR_INT(me_int, ori_int);
		n = 1;
		me_int = ft_strncmp("", "", n);
		ori_int = strncmp("", "", n);
		ERROR_INT(me_int, ori_int);
		//strlcat
		n = 7;
		char src3[100] = "bonjour";
		char dest3[100];
		char *dest4 = dest3;
		printf("ft_strlcpy\n");
		me_size = ft_strlcpy(dest3, src3, n);
		ori_size = strlcpy(dest4, src3, n);
		ERROR_INT(me_size, ori_size);
		ERROR_STR(strncmp(dest3, dest4, n));
		n = 0;
		me_size = ft_strlcpy(dest3, src3, n);
		ori_size = strlcpy(dest4, src3, n);
		ERROR_INT(me_size, ori_size);
		ERROR_STR(strncmp(dest3, dest4, n));
		n = 7;
		char dest5[5];
		char *dest6 = dest5;
		me_size = ft_strlcpy(dest5, src3, n);
		ori_size = strlcpy(dest6, src3, n);
		ERROR_INT(me_size, ori_size);
		ERROR_STR(strncmp(dest5, dest6, n));

		//ft_strlcat
		printf("ft_strlcat\n");
		char dest8[50] = "les amis";
		char *dest9 = dest8;
		n = 40;
		me_size = ft_strlcat(dest8, src3, n);
		ori_size = strlcat(dest9, src3, n);
		ERROR_INT(me_size, ori_size);
		ERROR_STR(strncmp(dest8, dest9, n));

		char dest10[50] = "les amis";
		char *dest11 = dest10;
		n = 3;
		me_size = ft_strlcat(dest10, src3, n);
		ori_size = strlcat(dest11, src3, n);
		ERROR_INT(me_size, ori_size);
		ERROR_STR(strncmp(dest10, dest11, n));

		char dest12[] = "";
		char *dest13 = dest12;
		n = 3;
		me_size = ft_strlcat(dest12, src3, n);
		ori_size = strlcat(dest13, src3, n);
		ERROR_INT(me_size, ori_size);
		ERROR_STR(strncmp(dest12, dest13, n));

		//ft_strnstr
		printf("ft_strnstr\n");
		char s2[] = "bonjour comment vont-je";
		char s3[] = "vont";
		n = 20;
		me = ft_strnstr(s2, s3, n);
		ori = strnstr(s2, s3, n);
		ERROR_STR(strncmp(me, ori, n));
	
		me = ft_strnstr(s2, "", n);
		ori = strnstr(s2, "", n);
		ERROR_STR(strncmp(me, ori, n));

		me = ft_strnstr(s2, "vous", n);
		ori = strnstr(s2, "vous", n);
		ERROR_NUL(me,ori);

		me = ft_strnstr("", "vous", n);
		ori = strnstr("", "vous", n);
		ERROR_NUL(me,ori);

		n = 5;
		me = ft_strnstr(s2, "je", n);
		ori = strnstr(s2, "je", n);
		ERROR_NUL(me, ori);

		//ft_atoi
		printf("ft_atoi\n");
		me_int = ft_atoi("12341ab23");
		ori_int = atoi("12341ab23");
		ERROR_INT(me_int, ori_int);

		me_int = ft_atoi("-123412w3");
		ori_int = atoi("-123412w3");
		ERROR_INT(me_int, ori_int);

		me_int = ft_atoi("0");
		ori_int = atoi("0");
		ERROR_INT(me_int, ori_int);

		me_int = ft_atoi("");
		ori_int = atoi("");
		ERROR_INT(me_int, ori_int);

		me_int = ft_atoi("+-543");
		ori_int = atoi("+-543");
		ERROR_INT(me_int, ori_int);

		me_int = ft_atoi("avc543");
		ori_int = atoi("avc543");
		ERROR_INT(me_int, ori_int);

		me_int = ft_atoi("-2147483648");
		ori_int = atoi("-2147483648");
		ERROR_INT(me_int, ori_int);

		//ft_calloc
		size_t nmemb = 2;
		size_t  size3 = 15;
		printf("ft_calloc\n");
		me = ft_calloc(nmemb, size3);
		ori = calloc(nmemb, size3);
		ERROR_STR(strncmp(me, ori , size3));

		nmemb = 0;
		me = ft_calloc(nmemb, size3);
		ori = calloc(nmemb, size3);
		ERROR_STR(strcmp(me, ori));

		//ft_strdup
		printf("ft_strdup\n");
		me = ft_strdup("Hellow");
		ori = strdup("Hellow");
		ERROR_STR(strcmp(me, ori));

		me = ft_strdup("");
		ori = strdup("");
		ERROR_STR(strcmp(me, ori));
	}
	if (argv[2][0] == '2' || argv[1][0] == '2')
	{
		void *output;

		printf("PART 2\n");
		printf("ft_substr\n");
		output = ft_substr("Bonjour les amis", 8, 20);
		ERROR_STR(strcmp(output, "les amis")); 
		output = ft_substr("Bonjour les amis", 8, 3);
		ERROR_STR(strcmp(output, "le")); 
		output = ft_substr("Bonjour les amis", 25, 30);
		ERROR_STR(strcmp(output, "")); 
		output = ft_substr("", 5, 30);
		ERROR_STR(strcmp(output, ""));

		//ft_strjoin
		printf("ft_itoa\n");
		output = ft_itoa(156789);
		ERROR_STR(strcmp(output, "156789"));
		output = ft_itoa(0);
		ERROR_STR(strcmp(output, "0"));
		output = ft_itoa(INT_MIN);
		ERROR_STR(strcmp(output, "-2147483648"));
		output = ft_itoa(INT_MAX);
		ERROR_STR(strcmp(output, "2147483647"));
		
		//ft_strmapi
		printf("ft_strmapi\n");
		output = ft_strmapi("abcdef", &mapi);
		ERROR_STR(strcmp(output, "ABCDEF"));
		output = ft_strmapi("", &mapi);
		ERROR_STR(strcmp(output, ""));
		output = ft_strmapi("123abcdefAS3e", &mapi);
		ERROR_STR(strcmp(output, "123ABCDEFAS3E"));

		//ft_putchar_fd, ft_putstr_fd, ft_putendl and ft_putnbr_fd
		printf("This is write with the function themself\n");
		ft_putchar_fd('p', 1);
		ft_putchar_fd('u', 1);
		ft_putchar_fd('t', 1);
		ft_putchar_fd('c', 1);
		ft_putchar_fd('h', 1);
		ft_putchar_fd('a', 1);
		ft_putchar_fd('r', 1);
		ft_putchar_fd(' ', 1);
		ft_putstr_fd("ft_putstr_fd  ", 1 );
		ft_putendl_fd("ft_putendl_fd", 1); 
		ft_putnbr_fd(INT_MIN, 1);
		ft_putchar_fd('\n', 1);
		ft_putnbr_fd(0, 1);
		ft_putchar_fd('\n', 1);
		ft_putnbr_fd(INT_MAX, 1);
		ft_putchar_fd('\n', 1);
		ft_putnbr_fd(10, 1);
		ft_putchar_fd('\n', 1);
	}

	if ( argv[3][0] == '3' || argv[2][0] == '3' || argv[1][0] == '3')
	{
		printf("BONUS PART \n");
	}
}
