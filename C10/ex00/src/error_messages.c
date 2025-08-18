/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_messages.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 22:06:25 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/16 22:14:47 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	error_messages(int error)
{
	if (error == 1)
		write(1, "File name missing.\n", 19);
	else if (error == 2)
		write(1, "Too many arguments.\n", 20);
	else
		write (1, "Cannot read file.\n", 18);
	return (1);
}
