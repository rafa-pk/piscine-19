/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:31:20 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/23 13:43:20 by cdouny           ###   ########.fr       */
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
	check_input(ac, av);
	if (!ft_strcmp(av[1], "-"))
		return (exec_from_stdin(ac, av));
	if (ac == 2)
		ret = rush02(av[2], av[1]);

	else
		ret = rush02(av[1], "numbers.dict");
	return (ret);
}
