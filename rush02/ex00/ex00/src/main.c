/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:31:20 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/24 22:29:52 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	main(int ac, char *av[])
{
	int	ret;

	ret = 0;
	if (ac == 1 || ac > 3)
	{
		write(1, "rush02: Invalid input.\n", 24);
		return (1);
	}
	if (ac == 2)
	{
		if (!ft_atoi(av[1]))
			return (write(1, "Error\n", 6));
		ret = rush02(av[1], "numbers.dict");
	}
	else
	{
		if (!ft_atoi(av[1]))
			return (write(1, "Error\n", 6));
		ret = rush02(av[2], av[1]);
	}
	return (ret);
}
