/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:25:01 by mbany             #+#    #+#             */
/*   Updated: 2023/11/30 08:49:50 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[5];
// 	char	src[] = "Hello, World!";
// 	ft_strncpy(dest, src, 5);
// 	printf("Source: %s\n", src);
// 	printf("Destination after fn_strncpy: %s\n", dest);
// 	return (0);
// }