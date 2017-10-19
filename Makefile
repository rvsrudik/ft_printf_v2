# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/28 14:19:32 by vrudenko          #+#    #+#              #
#    Updated: 2016/11/29 18:04:45 by vrudenko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a


OBJ = obj/ft_printf.o \
      obj/ft_flag_analysis.o \
      obj/ft_determ_precision.o \
      obj/ft_determ_specifier.o \
      obj/ft_reset_params.o \
      obj/ft_use_flags.o \
      obj/ft_write_argument.o \
      \
      obj/ft_adr_to_str.o \
      obj/ft_char_to_str.o \
      obj/ft_itoa.o \
      obj/ft_itoa_h.o \
      obj/ft_itoa_hh.o \
      obj/ft_itoa_j.o \
      obj/ft_itoa_l.o \
      obj/ft_itoa_ll.o \
      obj/ft_itoa_z.o \
      \
      obj/ft_itoa_base.o \
      obj/ft_itoa_base_h.o \
      obj/ft_itoa_base_hh.o \
      obj/ft_itoa_base_j.o \
      obj/ft_itoa_base_l.o \
      obj/ft_itoa_base_ll.o \
      obj/ft_itoa_base_z.o \
      \
      obj/ft_itoa_base_big.o \
      obj/ft_itoa_base_big_h.o \
      obj/ft_itoa_base_big_hh.o \
      obj/ft_itoa_base_big_j.o \
      obj/ft_itoa_base_big_l.o \
      obj/ft_itoa_base_big_ll.o \
      obj/ft_itoa_base_big_z.o \
      obj/ft_str_to_str.o \
      \
      obj/ft_uitoa.o \
      obj/ft_uitoa_h.o \
      obj/ft_uitoa_hh.o \
      obj/ft_uitoa_j.o \
      obj/ft_uitoa_l.o \
      obj/ft_uitoa_ll.o \
      obj/ft_uitoa_z.o \
        \
      obj/ft_atoi.o \
      obj/ft_atoi_l.o \
      obj/ft_isdigit.o \
      obj/ft_putchar.o \
      obj/ft_putstr.o \
      obj/ft_strchr.o \
      obj/ft_strcmp.o \
      obj/ft_strcpy.o \
      obj/ft_strdel.o \
      obj/ft_strjoin.o \
      obj/ft_strlen.o \
      obj/ft_strncpy.o \
      obj/ft_strnew.o \
      obj/ft_strnew_bchar.o \
      obj/ft_strtrim.o \
      \
      obj/ft_convert_argument.o \
      obj/ft_convert_c.o \
      obj/ft_convert_d.o \
      obj/ft_convert_o.o \
      obj/ft_convert_p.o \
      obj/ft_convert_percent.o \
      obj/ft_convert_s.o \
      obj/ft_convert_u.o \
      obj/ft_convert_x.o \
      \
      obj/ft_flag_hash.o \
      obj/ft_flag_plus.o \
      obj/ft_flag_space.o \
      obj/ft_precision.o \
      obj/ft_precision2.o \
      obj/ft_strstr.o \
      obj/ft_width.o


CC = gcc
INC = -Iincludes
CFLAGS =

all: $(NAME)

$(NAME): $(OBJ)
	ar rc  $(NAME) $(OBJ)
	ranlib  $(NAME)

obj/ft_flag_analysis.o:
	$(CC) $(INC) $(CFLAGS) -c src/ft_flag_analysis.c -o obj/ft_flag_analysis.o
obj/ft_determ_precision.o:
	$(CC) $(INC) $(CFLAGS) -c src/ft_determ_precision.c -o obj/ft_determ_precision.o
obj/ft_determ_specifier.o:
	$(CC) $(INC) $(CFLAGS) -c src/ft_determ_specifier.c -o obj/ft_determ_specifier.o
obj/ft_printf.o:
	$(CC) $(INC) $(CFLAGS) -c src/ft_printf.c -o obj/ft_printf.o
obj/ft_reset_params.o:
	$(CC) $(INC) $(CFLAGS) -c src/ft_reset_params.c -o obj/ft_reset_params.o
obj/ft_use_flags.o:
	$(CC) $(INC) $(CFLAGS) -c src/ft_use_flags.c -o obj/ft_use_flags.o
obj/ft_write_argument.o:
	$(CC) $(INC) $(CFLAGS) -c src/ft_write_argument.c -o obj/ft_write_argument.o


obj/ft_adr_to_str.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_adr_to_str.c -o obj/ft_adr_to_str.o
obj/ft_char_to_str.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_char_to_str.c -o obj/ft_char_to_str.o
obj/ft_itoa.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa.c -o obj/ft_itoa.o
obj/ft_itoa_h.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_h.c -o obj/ft_itoa_h.o
obj/ft_itoa_hh.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_hh.c -o obj/ft_itoa_hh.o
obj/ft_itoa_j.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_j.c -o obj/ft_itoa_j.o
obj/ft_itoa_l.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_l.c -o obj/ft_itoa_l.o
obj/ft_itoa_ll.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_ll.c -o obj/ft_itoa_ll.o
obj/ft_itoa_z.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_z.c -o obj/ft_itoa_z.o
obj/ft_itoa_base.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base.c -o obj/ft_itoa_base.o
obj/ft_itoa_base_h.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_h.c -o obj/ft_itoa_base_h.o
obj/ft_itoa_base_hh.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_hh.c -o obj/ft_itoa_base_hh.o
obj/ft_itoa_base_j.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_j.c -o obj/ft_itoa_base_j.o
obj/ft_itoa_base_l.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_l.c -o obj/ft_itoa_base_l.o
obj/ft_itoa_base_ll.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_ll.c -o obj/ft_itoa_base_ll.o
obj/ft_itoa_base_z.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_z.c -o obj/ft_itoa_base_z.o
obj/ft_uitoa.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_uitoa.c -o obj/ft_uitoa.o
obj/ft_uitoa_h.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_uitoa_h.c -o obj/ft_uitoa_h.o
obj/ft_uitoa_hh.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_uitoa_hh.c -o obj/ft_uitoa_hh.o
obj/ft_uitoa_j.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_uitoa_j.c -o obj/ft_uitoa_j.o
obj/ft_uitoa_l.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_uitoa_l.c -o obj/ft_uitoa_l.o
obj/ft_uitoa_ll.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_uitoa_ll.c -o obj/ft_uitoa_ll.o
obj/ft_uitoa_z.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_uitoa_z.c -o obj/ft_uitoa_z.o
obj/ft_itoa_base_big.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_big.c -o obj/ft_itoa_base_big.o
obj/ft_itoa_base_big_h.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_big_h.c -o obj/ft_itoa_base_big_h.o
obj/ft_itoa_base_big_hh.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_big_hh.c -o obj/ft_itoa_base_big_hh.o
obj/ft_itoa_base_big_j.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_big_j.c -o obj/ft_itoa_base_big_j.o
obj/ft_itoa_base_big_l.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_big_l.c -o obj/ft_itoa_base_big_l.o
obj/ft_itoa_base_big_ll.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_big_ll.c -o obj/ft_itoa_base_big_ll.o
obj/ft_itoa_base_big_z.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_itoa_base_big_z.c -o obj/ft_itoa_base_big_z.o
obj/ft_str_to_str.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/conversions/ft_str_to_str.c -o obj/ft_str_to_str.o


obj/ft_strstr.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_strstr.c -o obj/ft_strstr.o
obj/ft_atoi.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_atoi.c -o obj/ft_atoi.o
obj/ft_atoi_l.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_atoi_l.c -o obj/ft_atoi_l.o
obj/ft_isdigit.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_isdigit.c -o obj/ft_isdigit.o
obj/ft_putchar.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_putchar.c -o obj/ft_putchar.o
obj/ft_putstr.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_putstr.c -o obj/ft_putstr.o
obj/ft_strchr.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_strchr.c -o obj/ft_strchr.o
obj/ft_strcpy.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_strcpy.c -o obj/ft_strcpy.o
obj/ft_strdel.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_strdel.c -o obj/ft_strdel.o
obj/ft_strjoin.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_strjoin.c -o obj/ft_strjoin.o
obj/ft_strlen.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_strlen.c -o obj/ft_strlen.o
obj/ft_strncpy.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_strncpy.c -o obj/ft_strncpy.o
obj/ft_strnew.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_strnew.c -o obj/ft_strnew.o
obj/ft_strnew_bchar.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_strnew_bchar.c -o obj/ft_strnew_bchar.o
obj/ft_strtrim.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_strtrim.c -o obj/ft_strtrim.o
obj/ft_strcmp.o:
	$(CC) $(INC) $(CFLAGS) -c src/libft/ft_strcmp.c -o obj/ft_strcmp.o

obj/ft_convert_argument.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/ft_convert_argument.c -o obj/ft_convert_argument.o
obj/ft_convert_c.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/ft_convert_c.c -o obj/ft_convert_c.o
obj/ft_convert_d.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/ft_convert_d.c -o obj/ft_convert_d.o
obj/ft_convert_o.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/ft_convert_o.c -o obj/ft_convert_o.o
obj/ft_convert_p.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/ft_convert_p.c -o obj/ft_convert_p.o
obj/ft_convert_s.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/ft_convert_s.c -o obj/ft_convert_s.o
obj/ft_convert_u.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/ft_convert_u.c -o obj/ft_convert_u.o
obj/ft_convert_x.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/ft_convert_x.c -o obj/ft_convert_x.o
obj/ft_convert_percent.o:
	$(CC) $(INC) $(CFLAGS) -c src/conversion_data_into_string/ft_convert_percent.c -o obj/ft_convert_percent.o

obj/ft_flag_hash.o:
	$(CC) $(INC) $(CFLAGS) -c src/using_flags/ft_flag_hash.c -o obj/ft_flag_hash.o
obj/ft_flag_plus.o:
	$(CC) $(INC) $(CFLAGS) -c src/using_flags/ft_flag_plus.c -o obj/ft_flag_plus.o
obj/ft_flag_space.o:
	$(CC) $(INC) $(CFLAGS) -c src/using_flags/ft_flag_space.c -o obj/ft_flag_space.o
obj/ft_precision.o:
	$(CC) $(INC) $(CFLAGS) -c src/using_flags/ft_precision.c -o obj/ft_precision.o
obj/ft_precision2.o:
	$(CC) $(INC) $(CFLAGS) -c src/using_flags/ft_precision2.c -o obj/ft_precision2.o
obj/ft_width.o:
	$(CC) $(INC) $(CFLAGS) -c src/using_flags/ft_width.c -o obj/ft_width.o



clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all