/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:32:27 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/23 15:59:36 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFF_SIZE 10
# define SUCCESS 0

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int	ft_strlen(char *str);
int	ft_strcmp(char *s1, char *s2);
int	rush02(char *nbr, char *dictionary);
int	exec_from_stdin(int ac, char *av[]);
char	*read_line(int fd);
char	*ft_strjoin(char *str, char *buff);
char	*buff_cleaner(char *buff);
t_entry	**file_parser(char *dictionary);
char	**ft_split(char *str, char *charset);
char	*ft_strdup(char *str);

typedef	struct s_entry	
{
	char	*num;
	char	*num_str;
}	t_entry;

#endif
