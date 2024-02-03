/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 05:01:46 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/14 07:45:40 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_aff(int *tab, int size)
{
	int	i;

	i = 0;
	while (i <= (size - 1))
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = i + 1;
	if (size == 1)
		return ;
	while (j <= (size - 1))
	{
		temp = tab[j];
		while ((tab[i] > temp) && (i >= 0))
		{
			tab[i + 1] = tab[i];
			i--;
		}
		tab[i + 1] = temp;
		j++;
		i = j - 1;
	}
}
/*
int	main(void)
{
	int	tab[] = {5, 8, 3, 9, 8};

	ft_sort_int_tab(tab, 5);
	ft_aff(tab, 5);
	return (0);
}
*/
