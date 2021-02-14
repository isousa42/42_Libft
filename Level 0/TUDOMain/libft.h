
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

// PART I - LIBC FUNCTIONS

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int	ft_atoi(const char *str);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(char *src);
char	*ft_strnstr(char *str, char *to_find, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_memchr(const void *s, int c, size_t n);
void    ft_bzero(void *str, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t len);
void    *ft_memset(void *str, int c, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *str);

#endif










