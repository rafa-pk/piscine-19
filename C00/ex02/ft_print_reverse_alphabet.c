/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:15:32 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/05 13:51:23 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	z;

	z = 'z';
	while (z >= 'a')
	{
		write(1, &z, 1);
		z--;
	}
}

//int	main(void)
//{
//	ft_print_reverse_alphabet();
//	return (0);
//}
