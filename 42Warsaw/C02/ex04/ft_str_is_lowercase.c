/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:31:17 by mbany             #+#    #+#             */
/*   Updated: 2023/11/29 12:44:54 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == 0)
		return (1);
	while (*str != 0)
	{
		if (*str < 97 || *str > 122)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main (void)
// {
//     printf("%d\n", ft_str_is_lowercase("ONLY CPITAL LETTERS"));
//     printf("%d\n", ft_str_is_lowercase("The Answer...and Everything is 42"));
//     printf("%d\n", ft_str_is_lowercase("onlylowercaseletters"));
//     printf("%d\n", ft_str_is_lowercase(""));
//     return (0);
// }
