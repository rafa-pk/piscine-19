/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:18:03 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/05 14:41:35 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int	main(void)
//{
//	int	a = 25;
//	int	b = 5;
//	int	mod = a % b;
//	int	div = a / b;
//	int	*modp = &mod;
//	int	*divp = &div;
//
//	ft_div_mod(a, b, divp, modp);
//	printf("div: %d\n mod: %d\n", *divp, *modp);
//}
