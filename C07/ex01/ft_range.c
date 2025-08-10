/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:33:04 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/10 20:56:22 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*return_arr;

	if (min >= max)
		return (NULL);
	i = 0;
	range = max - min;
	return_arr = malloc(sizeof(int) * range);
	if (!return_arr)
		return (NULL);
	while (max > min)
	{
		return_arr[i] = min;
		i++;
		min++;
	}
	return (return_arr);
}
/*
int	main(void)
{
	int	i = 0;
	int	*range = ft_range(9, 27);
	
	while (i < (27 - 9))
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/
