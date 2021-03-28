/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:24:16 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 06:04:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUFF_SIZE 16384

enum	e_ret_codes
{
	SUCCESS,
	MALLOC_ERROR,
	OPEN_ERROR,
	READ_ERROR,
	STRJOIN_ERROR,
	WRONG_META_CHARS_ERROR,
	WRONG_MAP_CHARS_ERROR,
	DIM_ERROR,
	ERROR
};

enum	e_cell
{
	EMPTY,
	OBSTACLE,
	FULL
};

enum	e_dim
{
	HEIGHT,
	WIDTH
};

enum	e_std_fd
{
	STDIN,
	STDOUT,
	STDERR
};

typedef struct s_cell
{
	int	x;
	int	y;
	int	dim;
}				t_he_chosen_cell;

void				ft_putendl(char const *s);
void				ft_putstr(char const *s);
void				ft_putlnbr(long n);
void				ft_putnbr(int n);
void				ft_putchar(char const c);
void				err_msg(int err_code);
void				print_matrix(int **matrix,
						int dim[2]);
void				print_res(int **matrix,
						t_he_chosen_cell neo,
						int dim[2],
						char meta_chars[3]);
void				multi_free(char *content,
						int **matrix,
						int dim[2]);
int					bsq(char const *file);
int					get_content(char const *file,
						char **content);
int					malloc_buff(char **buff);
int					get_fd(char const *file);
int					get_meta_chars(char meta_chars[3],
						int dim[2],
						char const *content);
int					check_meta_chars(char meta_chars[3],
						char const c);
int					check_map(char const *content,
						int dim[2],
						char meta_chars[3]);
int					get_matrix(int ***matrix,
						char const *content,
						int dim[2],
						char meta_chars[3]);
int					malloc_matrix(int ***matrix,
						int dim[2]);
int					min(int **matrix,
						int i,
						int j);
char				*ft_strjoin(char const *s1,
						char const *s2);
char				*ft_strdup(char const *s);
bool				ft_isdigit(char c);
bool				is_meta_char(char const c,
						char const meta_chars[3]);
size_t				ft_strlen(char const *s);
t_he_chosen_cell	transform_matrix(int **matrix,
						int dim[2]);

#endif
