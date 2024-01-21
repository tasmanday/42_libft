/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:50:58 by tday              #+#    #+#             */
/*   Updated: 2024/01/21 17:12:22 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

/*
** structs
*/

/* linked lists */

/* singularly linked list */
typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;

/* doubly linked list */
typedef struct s_dlist
{
	void			*data;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}				t_dlist;

/*
** prototypes
*/

/* characters */

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

/* put */

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nb);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *str, int fd);
void		ft_putendl_fd(char *str, int fd);
void		ft_putnbr_fd(int n, int fd);

/* ft_printf */

void		ft_character(char c, int *length);
void		ft_string(char *s, int *length);
void		ft_decimal_integer(int d, int *length);
void		ft_unsigned_integer(unsigned int u, int *length);
void		ft_hexidecimal(unsigned int x, int *length, char char_case,
				int first);
void		ft_pointer(size_t p, int *length, int first);
int			ft_printf(const char *string, ...);

/* memory */

void		*ft_memset(void *pointer, int c, size_t n);
void		ft_bzero(void *pointer, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *ptr, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t number, size_t size);
void		*ft_realloc(void *pointer, size_t orig_size, size_t new_size);
void		free_null(void **mem_ptr);

/* conversion */

long long	ft_atoi(const char *str);
char		*ft_itoa(long long n);

/* math */

long long	ft_abs(long long n);
long double	ft_fabs(long double n);
int			ft_is_even(long long n);
int			ft_is_odd(long long n);
long long	ft_power(long long n, long long power);
long long	ft_sqrt(long long n);
long double	ft_remainder(long double numerator, long double denominator);
long long	ft_round(long double n);
long double	ft_roundf(long double n, int decimal_places);
size_t		ft_get_len_int(long long n);

/* strings */
size_t		ft_strlen(const char *string);
char		*ft_strcpy(char *dest, char *src);
size_t		ft_strlcpy(char *dest, const char *src, size_t dest_len);
char		*ft_strcat(char *dest, char *src);
size_t		ft_strlcat(char *dest, const char *src, size_t dest_buff_len);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
char		*ft_strstr(char *str, char *to_find);
char		*ft_strnstr(const char *haystack, const char *needle, size_t n);
int			ft_strcmp(char *s1, char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strdup(char *src);
char		*ft_substr(char const *str, unsigned int start, size_t sub_len);
char		*ft_strjoin(const char *s1, const char *s2);

#endif