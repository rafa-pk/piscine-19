/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:05:05 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/05 16:59:27 by rvaz-da-         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

//int	main(void)
//{
//	int	tab[7] = {7, 2, 9, 0, 3, 4, 5};
//	int	*tabp = &tab[0];
//	
//	printf("\nTab before: \n");
//	for (int i = 0; i < 7; i++)
//		printf("%d ", tab[i]);
//	ft_rev_int_tab(tabp, 7);
//	printf("\n\n");
//	printf("Tab after: \n");
//	for (int i = 0; i < 7; i++)
//		printf("%d ", tab[i]);
//	printf("\n\n");
//	return (0);
//}
