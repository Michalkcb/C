/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:58:54 by mbany             #+#    #+#             */
/*   Updated: 2023/12/06 17:17:44 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	base;

	base = 1;
	if (nb > 0)
	{
		while (base * base <= nb)
		{
			if (base * base == nb)
				return (base);
			if (base > 46340)
				return (0);
			base++;
		}
	}
	return (0);
}

// #include <stdio.h>
// int main ()
// {
// 	int result = ft_sqrt(9);
// 	printf("%d", result);
// 	return(0);
// }
