/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:08:24 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/05 14:17:29 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

//int	main(void)
//{
//	int	a = 3;
//	int	*ap = &a;
//	int	b = 5;
//	int	*bp = &b;
//	printf("a avant: %d\n b avant: %b\n", ap, bp);
//	ft_swap(ap, bp);
//	printf("a apres: %d\n b apres: %d\n", ap, bp);
//	return (0);
//}
