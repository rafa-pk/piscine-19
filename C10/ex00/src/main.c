/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:41:35 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/16 22:14:21 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	main(int av, char *av[])
{
	if (ac == 1)
		return (error_message(0));
	else if (ac > 2)
		return (error_message(2));
	else if (display_file(av[1]) == -1)
		return (error_messages(1));
	else
		return (display_file(av[1]));
	return (0);
}
