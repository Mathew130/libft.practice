/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:20:16 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/09 13:20:19 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
// int main ()
// {
//     char *s = "hello world";
//     char *p;

//     p = ft_strchr(s, 'w');
//     if(p)
//     {
//         printf("%s\n", p);
//     }
//     else
//     {
//         printf("not found\n");
//     }
// }