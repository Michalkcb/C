/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:40:34 by mbany             #+#    #+#             */
/*   Updated: 2023/12/01 09:00:57 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (j < nb && src[j] != 0)
	{
		dest[i + j] = src [j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

// #include <stdio.h>
// int main()
// {
//    char src[] = "Hello";
//    char dest[] = "42!";
//    printf("%s", ft_strncat(dest, src, 7));
// }
