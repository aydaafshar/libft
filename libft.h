#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h> //for size_t type
# include <stdio.h>
# include <stdlib.h> //for malloc/free
# include <unistd.h> //for write
// functions

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int x, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
int		ft_toupper(int c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *str, int ch);

#endif
