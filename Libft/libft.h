#ifndef libft
# define libft
#include <stddef.h>
#include <stdlib.h>
void *ft_bzero(void *s,size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char s1[], const char s2[], size_t n);
char *ft_strnstr( char *s1 ,  char *s2 , size_t n);
size_t ft_strlen( const char* str );
size_t ft_strlcpy(char *dst , const char *src , size_t size);
char *ft_strchr(const char *s, int c);
void *ft_memset(void *s, int c, size_t n);
void* ft_memmove( void* dest, const void* src, size_t count );
void* ft_memcpy( void* dest, const void* src, size_t count );
int ft_memcmp(const void *s1, const void *s2, size_t n);
void* ft_memchr( const void* s, int c, size_t n );
int	ft_isdegit(int c);
int	ft_isascii(int	c);
int 	ft_isalpha(int c);
int		ft_isalnum(int c);
void *ft_bzero(void *s,size_t n);
void* calloc( size_t num, size_t size );
char *ft_strdup(const char *s);
int isprint( int c );
size_t ft_strlcat(char *dest, const char *src, size_t size);

#endif