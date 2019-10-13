/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorianroques <victorianroques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:55:35 by viroques          #+#    #+#             */
/*   Updated: 2019/10/11 20:49:56 by victorianro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlen(const char *s);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_isspace(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
size_t  ft_strlcat(char *dest, const char *src, size_t count);
char    *ft_strnstr(const char *s1, const char *s2, size_t n);
int     ft_atoi(const char *nptr);
void    *ft_calloc(size_t nmemb, size_t size);
char    *ft_strdup(const char *s);

#endif