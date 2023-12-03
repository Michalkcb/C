/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:51:44 by mbany             #+#    #+#             */
/*   Updated: 2023/11/29 13:04:07 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == 0)
	{
		return (1);
	}
	while (*str != 0)
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
//     printf("%d\n", ft_str_is_uppercase("OIREOE"));
//     printf("%d\n", ft_str_is_uppercase("ojho"));
//     printf("%d\n", ft_str_is_uppercase("jOIHoih"));
//     printf("%d\n", ft_str_is_uppercase(""));
// }
