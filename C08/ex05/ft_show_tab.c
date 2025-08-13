/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:47:39 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/13 16:44:49 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_stock_str.h"

/*typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	bnb;

	bnb = nb;
	if (bnb < 0)
	{
		ft_putchar('-');
		bnb = -bnb;
	}
	if (bnb >= 10)
	{
		ft_putnbr(bnb / 10);
		ft_putnbr(bnb % 10);
	}
	else
		ft_putchar(bnb + '0');
	ft_putchar('\n');
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putnbr(par[i].size);
		ft_putstr(par[i].str);
		ft_putstr(par[i].copy);
		i++;
	}
}
