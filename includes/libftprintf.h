/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 16:39:52 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/31 16:39:53 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

//# define TYPES "d"

# define TYPES "sSpdDioOuUxXcC%"

int					g_flag;
char				*g_toprint;
int					g_return_value;

typedef struct		s_printf
{
	void			*data;
	char			type;
	char			specifier;
	int				flag_hash;
	int				flag_minus;
	int				flag_plus;
	int				flag_zero;
	int				flag_space;
	int				width;
	int				precision;
	char			*str;
	char			*flags;
	int 			str_memory_allocated;
}					t_printf;

/*
**---------------------------------------------------------------------
**------------------------------>MAIN<---------------------------------
*/
int					ft_printf(char *format, ...);
int					ft_flag_analysis(char *line, void **arguments);
void				ft_convert_argument(t_printf *params);
void				ft_write_argument(t_printf *params);
void				ft_reset_params(t_printf *params);
void				ft_use_flags(t_printf *params);
void				ft_determ_precision(t_printf *params);
void				ft_determ_specifier(t_printf *params);
/*
 **---------------------------------------------------------------------
 **------------------------->CONVERT_TO_STR<----------------------------
*/
char				*ft_char_to_str(t_printf *params);
char				*ft_str_to_str(void *s);
char				*ft_adr_to_str(void *adr);

char				*ft_itoa_d(void *nbr);
char				*ft_itoa_h(void *nbr);
char				*ft_itoa_hh(void *nbr);
char				*ft_itoa_l(void *nbr);
char				*ft_itoa_ll(void *nbr);
char				*ft_itoa_j(void *nbr);
char				*ft_itoa_z(void *nbr);

char				*ft_itoa_base(void *nbr, int base);
char				*ft_itoa_base_h(void *nbr, int base);
char				*ft_itoa_base_hh(void *nbr, int base);
char				*ft_itoa_base_l(void *nbr, int base);
char				*ft_itoa_base_ll(void *nbr, int base);
char				*ft_itoa_base_j(void *nbr, int base);
char				*ft_itoa_base_z(void *nbr, int base);

//char				*ft_itoa_big_base(void *nbr, int base);

char				*ft_itoa_base_big(void *nbr, int base);
char				*ft_itoa_base_big_h(void *nbr, int base);
char				*ft_itoa_base_big_hh(void *nbr, int base);
char				*ft_itoa_base_big_l(void *nbr, int base);
char				*ft_itoa_base_big_ll(void *nbr, int base);
char				*ft_itoa_base_big_j(void *nbr, int base);
char				*ft_itoa_base_big_z(void *nbr, int base);

char				*ft_uitoa(void *nbr);
char				*ft_uitoa_h(void *nbr);
char				*ft_uitoa_hh(void *nbr);
char				*ft_uitoa_j(void *nbr);
char				*ft_uitoa_l(void *nbr);
char				*ft_uitoa_ll(void *nbr);
char				*ft_uitoa_z(void *nbr);

void				ft_convert_d(t_printf *params);
void				ft_convert_u(t_printf *params);
void				ft_convert_o(t_printf *params);
void				ft_convert_x(t_printf *params);
void				ft_convert_c(t_printf *params);
void				ft_convert_percent(t_printf *params);
void				ft_convert_p(t_printf *params);
void				ft_convert_s(t_printf *params);
/*
 **---------------------------------------------------------------------
 **------------------------------>FLAGS<--------------------------------
*/
void				ft_flag_hash(t_printf *params);
void				ft_flag_plus(t_printf *params);
void				ft_flag_space(t_printf *params);
void				ft_precision(t_printf *params);
void				ft_precision_for_x(t_printf *params);
void				ft_width(t_printf *params);
/*
 **---------------------------------------------------------------------
 **------------------------------>LIBFT<--------------------------------
*/
int					ft_atoi(const char *str);
int					ft_atoi_l(const char *str);
int					ft_isdigit(int c);
void				ft_putchar(char c);
void				ft_putstr(char const *str);
char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_strdel(char **as);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlen(const char *s);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strnew(size_t size);
char				*ft_strnew_bchar(size_t size, char c);
char				*ft_strtrim(char const *s);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strstr(const char *str, const char *to_find);
/*
 **---------------------------------------------------------------------
 **------------------------------>END<----------------------------------
*/

#endif
