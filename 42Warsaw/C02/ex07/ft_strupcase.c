/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:26:00 by mbany             #+#    #+#             */
/*   Updated: 2023/11/29 15:49:02 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = -1;
	while (str[++i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

// int main(void)
// {
//     char text[]="sdggr";
//     char text2[]="sHgjiIH";
//     printf("%s\n", ft_strupcase(text));
//     printf("%s\n", ft_strupcase(text2));
//     return (0);
// }
