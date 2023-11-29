/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:47:35 by mbany             #+#    #+#             */
/*   Updated: 2023/11/28 14:30:16 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main() {
//     const char *myString = "This messabe will blow in 10sec!";

//     int length = ft_strlen((char *)myString);

//     printf("Dlugosc ciagu \"%s\" to %d znakow.\n", myString, length);

//     return 0;
// }