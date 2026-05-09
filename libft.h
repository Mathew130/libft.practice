/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:25:02 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/09 13:25:03 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_strlen(char *str);
int					ft_isalpha(char c);
int					ft_isdigit(int i);
int					ft_isprint(int c);
char				ft_tolower(char c);
int					ft_atoi(const char *str);
char				ft_toupper(char c);
void				*ft_memset(void *str, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_bzero(void *s, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
char				*ft_strrchr(char *s, int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strchr(char *s, int c);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strnstr(const char *h, const char *n, size_t l);

#endif