/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:22:34 by mbany             #+#    #+#             */
/*   Updated: 2023/11/29 10:46:34 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == 0)
		return (1);
	while (*str != 0)
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main (void)
// {
//     printf("%d\n", ft_str_is_alpha("pneumonoultrami...canoconiosis"));
//     printf("%d\n", ft_str_is_alpha("The Answer...and Everything is 42"));
// }
