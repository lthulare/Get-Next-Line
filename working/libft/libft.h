/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthulare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:35:18 by lthulare          #+#    #+#             */
/*   Updated: 2019/06/26 16:01:46 by lthulare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memalloc(size_t size);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *str1, const void *str2, size_t n);
void			ft_memdel(void **ap);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *str, int c, size_t n);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strchr(const char *s, int c);
void			ft_strclr(char *s);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dst, const char *src);
void			ft_strdel(char **as);
char			*ft_strdup(const char *s1);
char			*ft_strndup(const char *s, size_t n);
int				ft_strequ(char const *s1, char const *s2);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *str);
char			*ft_strncat(char *s1, const char *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *s1, const char *s2);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strnstr(const char *s1, const char *s2, size_t len);
void			ft_strclr(char *s);
char			*ft_strmap(char const *s, char (*f)(char));
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putnbr(int n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putstr_fd(char const *s, int fd);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
void			ft_putendl(char const *s);
char			*ft_itoa(int c);
char			**strsplit(char const *s, char c);
void			ft_putendl_fd(const char *s, int fd);
void			ft_putnbr(int n);
char			*ft_itoa(int c);
char			**ft_strsplit(char const *s, char c);
#endif
