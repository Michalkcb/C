/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:07:13 by mbany             #+#    #+#             */
/*   Updated: 2023/11/30 10:57:20 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == 0)
	{
		return (1);
	}
	while (*str != 0)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main (void)
// {
//     printf("%d\n", ft_str_is_printable("8tiuoh8y8:_\\&^&^#@$#!fo8y"));
//     printf("%d\n", ft_str_is_printable(" "));
//     printf("%d\n", ft_str_is_printable(""));
// }
