/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:47:35 by mbany             #+#    #+#             */
/*   Updated: 2023/11/28 14:26:16 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
// int main()
// {
//     int a = 1;
//     int b = 5;

//     printf("Wartosci przed zmiana: %d %d\n", a, b);

//     ft_swap(&a, &b);

//     printf("Wartosci po zmianie: %d %d\n", a, b);

//     return 0;
// }
