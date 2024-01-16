/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:50:58 by tday              #+#    #+#             */
/*   Updated: 2024/01/14 15:09:16 by tday             ###   ########.fr       */
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

/* character */
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
void		ft_hexidecimal(unsigned int x, int *length, char char_case, int first);
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

/* conversion */
long long	ft_atoi(const char *str);
char		*ft_itoa(long long n);

#endif