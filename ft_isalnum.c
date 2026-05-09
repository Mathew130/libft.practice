/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:22:13 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/09 11:25:53 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(char c)
{
	if (ft_isalpha (c) || ft_isdigit (c))
		return (1);
	return (0);
}

// int main()
// {
//     char c;
//          c = 'c';
//     int j;
//     j = ft_isalnum(c);
//     if(j == 1)
//     {
//        printf("%c is an alphabet or a digit\n ", c);
//     }
//     else
//     {
//         printf("%c is niether an alphabet nor a digit\n ", c);
//     }
// }