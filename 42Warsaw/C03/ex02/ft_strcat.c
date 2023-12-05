/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:01:30 by mbany             #+#    #+#             */
/*   Updated: 2023/11/30 19:24:45 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    char dest[24] = "hello, ";
//    char src[] = "world!";
//    ft_strcat(dest, src);
//    printf("Concatenated string: %s\n", dest);
//     return 0;
// }
