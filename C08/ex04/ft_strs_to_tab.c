/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:32:15 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/12 18:13:42 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	while (av[i])
	{
		s_stock_str.size = ft_strlen(av[i]);
		s_stock_str->str = ft_strcpy(str, av[i]);
		s_stock_str->copy = ft_strdup(str, av[i]);
		i++;
	}
}
