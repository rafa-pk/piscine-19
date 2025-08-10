/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:54:00 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/10 21:29:03 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0 || nb == 2)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb / i)
		i++;
	if (nb % i)
		return (0);
	return (i);
}
/*
int	main(void)
{
	printf("Result: %d", ft_sqrt(25));
	return (0);
}*/
