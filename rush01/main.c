/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:58:44 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/16 15:29:12 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_arg(char *str)
{
	int	i;

	i = 0;
	printf("in check_arg\n");
	if (ft_strlen(str) != 31)
		return (0);
	while (str[i])
	{
		if (!(i % 2))
		{
			if (str[i] == '0' || str[i] > '4')
				return (0);
		}
		else
			if (str[i] != 32)
				return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char *av[])
{
	//char	solution[4][4];
	
	if (ac != 2 || !(check_arg(av[1])))
	{
		write(1, "Error.\n", 7);
		return (0);
	}
	write(1, "workd\n", 6);
	//solution = NULL;
	/*while (!solving_func(av[1]))	//TODO have deviding function into 4 strings of 4, or table of 4x4
	{
		if (solving_func(av[1]))
			print_answer(solution);
		else
			solving_func(av[1]);
	}*/
	return (0);
}
