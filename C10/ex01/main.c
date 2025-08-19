/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:05:58 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/19 12:01:51 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	if (ac == 1 || !ft_strcmp(av[1], "-"))
		return (scan_and_print());
	if (ac >= 2)
	{
		while (av[i])
		{
			if (ft_cat(av[i]))
				return (1);
			i++;
		}
	}
	return (0);
}
