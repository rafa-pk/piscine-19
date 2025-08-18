/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:41:35 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/18 08:35:03 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	main(int ac, char *av[])
{
	int	display_error;

	display_error = 0;
	if (ac == 1)
		return (error_messages(0));
	else if (ac > 2)
		return (error_messages(2));
	else if (display_error == -1)
		return (error_messages(1));
	else
		return (display_file(av[1]));
	return (0);
}
