/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:12:04 by mbany             #+#    #+#             */
/*   Updated: 2023/12/14 15:38:38 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*dest;

	i = ft_strlen(src);
	dest = (char *)malloc(i + 1);
	if (!(dest))
	{
		return (NULL);
	}
	return (ft_strcat(dest, src));
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	if (argc < 2)
// 		return 0;
//     char *str = argv[1];
//     char *dest; 
// 	dest = ft_strdup(str);
// 	printf("Original string: %s\n", str);
// 	printf("Duplicated string: %s\n", dest);
// }