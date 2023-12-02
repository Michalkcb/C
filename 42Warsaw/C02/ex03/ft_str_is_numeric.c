/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:59:21 by mbany             #+#    #+#             */
/*   Updated: 2023/11/29 11:24:13 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == 0)
	{
		return (1);
	}
	while (*str != 0)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main (void)
// {
//     printf("%d\n", ft_str_is_numeric("42"));
//     printf("%d\n", ft_str_is_numeric("The Answer...and Everything is 42"));
//     return (0);
// }
