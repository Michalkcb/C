/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 08:59:47 by mbany             #+#    #+#             */
/*   Updated: 2023/12/02 16:19:56 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

//#include <stdio.h>
//
// int main(void)
// {
//     char str1[] = "Georgia";
//     char str2[]= "Utah";
//     int result;

//     printf("%s\n", str1);
//     result = ft_strcmp(str1, str2);
//     printf("%d\n", result);
//     return (0);
// }
