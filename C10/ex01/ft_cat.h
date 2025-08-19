/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:11:35 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/19 11:31:34 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <libgen.h>
# include <string.h>
# include <errno.h>

# define BUFF_SIZE 1024

int	ft_strcmp(char *s1, char *s2);
int	read_input(char *buff, int size);
int	scan_and_print(void);
int	ft_cat(char *filename);
void	ft_putstr(char *str, char *add);
void	handle_errors(char *location, int error);

#endif
