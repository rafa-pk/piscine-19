/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:42:13 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/05 19:48:10 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_tmp;
	int	b_tmp;

	a_tmp = *a;
	b_tmp = *b;
	*a = a_tmp / b_tmp;
	*b = a_tmp % b_tmp;
}

//int	main(void)
//{
//	int	a = 56748;
//	int	b = 0;
//	int	*ap = &a;
//	int	*bp = &b;
//
//	ft_ultimate_div_mod(ap, bp);
//	printf("a (div): %d\n b (mod): %d\n", *ap, *bp);
//	return (0);
//}
