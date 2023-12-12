/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:57:00 by mbany             #+#    #+#             */
/*   Updated: 2023/12/05 19:15:43 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		x *= nb;
		nb--;
	}
	return (x);
}

// #include <stdio.h>
// int main()
// {
// 	int wynik = ft_iterative_factorial(4);
// 	printf("%d", wynik);
// 	return 0;
// }
