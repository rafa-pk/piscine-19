/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:06:02 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/05 18:17:58 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

//int	main(void)
//{
//	int	tab[7] = {9, 5, 6, -2, 8, 5, 0};
//	int	*tabp = &tab[0];
//
//	printf("\n\n");
//	printf("Array before sorting:\n");
//	for (int i = 0; i < 7; i++)
//		printf("%d ", tab[i]);
//	printf("\n\n");
//	ft_sort_int_tab(tabp, 7);
//	printf("Array after sorting: \n");
//	for (int i = 0; i < 7; i++)
//		printf("%d ", tab[i]);
//	printf("\n\n");
//	return (0);
//}
