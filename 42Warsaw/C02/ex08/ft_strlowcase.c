/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:53:58 by mbany             #+#    #+#             */
/*   Updated: 2023/11/29 16:01:23 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
//     char text[]="ODOEOIFJ";
//     char text2[]="sHgjiIH";
//     printf("%s\n", ft_strlowcase(text));
//     printf("%s\n", ft_strlowcase(text2));
//     return (0);
// }
