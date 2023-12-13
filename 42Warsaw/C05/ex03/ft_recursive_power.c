/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:23:28 by mbany             #+#    #+#             */
/*   Updated: 2023/12/06 13:03:44 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	x;

	x = nb;
	if (x > x * nb)
		return (0);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
		return (x * ft_recursive_power(x, power - 1));
	else
		return (x);
}

// #include <stdio.h>
// int main()
// {
// 	int result = ft_recursive_power(3, 3);
// 	printf("%d", result);
// 	return (0);
// }
