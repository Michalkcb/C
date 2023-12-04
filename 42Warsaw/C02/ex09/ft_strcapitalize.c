/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:14:05 by mbany             #+#    #+#             */
/*   Updated: 2023/11/30 14:26:39 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	word;

	i = 0;
	word = 1;
	while (str[i] != 0)
	{
		c = str[i];
		if (word == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (word == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			word = 1;
		else
			word = 0;
		i++;
	}
	return (str);
}

// int main (void)
// {
//     char myString[] = "The answer to the ultimate question\
//     of life, the universe and everything is 42.";

//     printf("Before: %s\n", myString);
//     ft_strcapitalize(myString);
//     printf("After: %s\n", myString);

//     return 0;
// }