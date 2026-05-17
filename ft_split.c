/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 10:49:49 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/17 17:34:53 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char const *s, char c) // count words
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	length(const char *s, char c) // measurs current word length
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (s[i] && s[i] != c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		l++;
	}
	return (l);
}
