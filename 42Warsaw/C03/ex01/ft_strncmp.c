/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:53:59 by mbany             #+#    #+#             */
/*   Updated: 2023/11/30 16:56:36 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != 0 && i < n -1)
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
//     result = ft_strncmp(str1, str2, 1);
//     printf("%d\n", result);
//     return (0);
// }
