#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <fcntl.h>
int		ft_isalpha(int c); //1
int		ft_isdigit(int c); //2
int		ft_isalnum(int c); //3
int		ft_isascii(int c); //4
int		ft_isprint(int c); //5
size_t	ft_strlen(const char *s); //6
void	*ft_memset(void *b, int c, size_t len); //7
void	ft_bzero(void *s, size_t n); //8
void	*ft_memcpy(void *dst, const void *src, size_t n); //9
void	*ft_memccpy(void *dst, const void *src, int c, size_t n); //10
void	*ft_memmove(void *dst, const void *src, size_t n); //11
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); //12
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); //13
int		ft_toupper(int c); //14
int		ft_tolower(int c); //15
char	*ft_strchr(const char *s, int c); //16
char	*ft_strrchr(const char *s, int c); //17
int		ft_strncmp(const char *s1, const char *s2, size_t n); //18
void	*ft_memchr(const void *s, int c, size_t n); //19
int		ft_memcmp(const void *s1, const void *s2, size_t n); //20
char	*ft_strnstr(const char *haystack, const char *needle, size_t len); //21
int		ft_atoi(const char *str); //22
char *ft_strdup(const char *s); //23
void *ft_calloc(size_t num, size_t size); //24
char *ft_substr(char const *s, unsigned int start,
size_t len);//25
char *ft_strjoin(char const *s1, char const *s2); //26
char *ft_strtrim(char const *s1, char const *set); //27
char **ft_split(char const *s, char c); //28
char *ft_itoa(int n); //29
char *ft_strmapi(char const *s, char (*f)(unsigned int, char)); //30
void ft_striteri(char *s, void (*f)(unsigned int, char*));//31
void ft_putchar_fd(char c, int fd);//32
void ft_putstr_fd(char *s, int fd);//33
void ft_putendl_fd(char *s, int fd);//34
#endif