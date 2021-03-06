/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdesbord <jdesbord@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/15 02:27:31 by jdesbord     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 02:51:14 by jdesbord    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

int					ft_strcmp(const char *str, const char *str2);
char				*ft_strcpy(char *str, const char *str2);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *str);
ssize_t				ft_write(int fd, const void *str, size_t len);
ssize_t				ft_read(int fd, void *buf, size_t count);
int					ft_atoi_base(char *str, char *base);
int					ft_list_push_front(t_list **addr, void *data);
t_list				*ft_list_create_elem(void *content);
int					ft_list_size(t_list *begin_list);
void 				ft_list_sort(t_list **begin_list, int (*cmp)());
void				ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));

#endif
