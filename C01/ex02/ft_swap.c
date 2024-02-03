/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 02:13:06 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/14 02:16:58 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	*a;
	int	*b;
	int	n1;
	int	n2;

	n1 = 2;
	n2 = 13;
	a = &n1;
	b = &n2;
	printf("n1: %d\nn2: %d\n", n1, n2);
	ft_swap(a, b);
	printf("n1: %d\nn2: %d\n", n1, n2);
	return (0);
}
*/
