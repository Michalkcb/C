/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_iterative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:57:45 by mbany             #+#    #+#             */
/*   Updated: 2023/12/06 12:22:49 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		x *= nb;
		power--;
	}
	return (x);
}

// #include <stdio.h>
// int main()
// {
// 	int result = ft_iterative_power(2, 3);
// 	printf("%d", result);
// 	return (0);
// }
