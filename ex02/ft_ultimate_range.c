/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:57:13 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/11 11:49:23 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	diff = max - min;
	*range = malloc(sizeof(int) * diff);
	if (!range)
	{
		*range = NULL;
		return (-1);
	}
	while (max > min)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (diff);
}
/*
int	main(void)
{
	int	i = 0;
	int	*range = NULL;
	
	ft_ultimate_range(&range, 0, 9);
	while (i < (9 - 0))
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/
