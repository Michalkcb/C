/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:58:28 by mbany             #+#    #+#             */
/*   Updated: 2023/12/06 16:55:30 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	x;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		x = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		return (x);
	}
}

// #include <stdio.h>
// int main ()
// {
// 	int result = ft_fibonacci(10);
// 	printf("%d", result);
// 	return (0);
// }
