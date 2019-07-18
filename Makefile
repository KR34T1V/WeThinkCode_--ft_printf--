# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/17 11:24:40 by cterblan          #+#    #+#              #
#    Updated: 2018/08/25 15:48:08 by cterblan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#								NAME
################################################################################
AUTHOR := cterblan
#AUTHOR NAME^^^

NAME := libftprintf.a
#PROJECT OUTPUT FILE NAME ^^^
################################################################################
#								DIRECTORIES
################################################################################
INC_DIR := inc
#INCLUDES DIRECTORY ^^^
SRC_DIR := src
#SOURCES DIRECTORY ^^^
OBJ_DIR := obj
#OBJECTS DIRECTORY ^^^
LIB_DIR := lib
#LIBRARY DIRECTORY ^^^
################################################################################
#								FILES
################################################################################
#SRC:= ft_function.c
SRC :=	ft_printf.c\
		ft_check_conv.c\
		ft_rset_flag.c\
		ft_set_flag.c\
		ft_check_flags.c\
		ft_quit.c\
		ft_lltoa_flag.c\
		ft_ulltoa.c\
		ft_putwchar.c\
		ft_putwstr.c\
		ft_wstrlen.c\
		ft_print_loose.c\
		ft_i_handler.c\
		ft_print_i.c\
		ft_c_handler.c\
		ft_print_c.c\
		ft_o_handler.c\
		ft_print_o.c\
		ft_u_handler.c\
		ft_print_u.c\
		ft_x_handler.c\
		ft_print_x.c\
		ft_p_handler.c\
		ft_print_p.c\
		ft_s_handler.c\
		ft_print_s.c\
		ft_ld_handler.c\
		ft_lo_handler.c\
		ft_lu_handler.c\
		ft_lx_handler.c\
		ft_print_lx.c\
		ft_print_sign.c\
		ft_lc_handler.c\
		ft_print_wchar.c\
		ft_ls_handler.c\
		ft_print_ls.c\
		ft_flag_size.c\
		ft_flag_width.c\
		ft_flag_pre.c\
		ft_flag_size.c\
		ft_flag_plus.c\
		ft_flag_sharp.c\
		ft_flag_space.c\
#ADD SOURCE FILES HERE ^^^
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:%.c=%.o))
################################################################################
#								LIBRARIES
################################################################################
#NAME_DIR := $(LIBDIR)/{library}
LIBFT_DIR := $(LIB_DIR)/libft
#ADD ADDITIONAL LIBRARIES HERE ^^^
LIB_FLAG := -lft
################################################################################
#								COMPILER
################################################################################
CFLAGS := -Wall -Werror -Wextra
#ADD ADDITIONAL FLAGS HERE ^^^
CC := gcc $(CFLAGS)
################################################################################
#								RULES
################################################################################

all: $(NAME)

$(NAME): $(OBJ)
	@make all -C $(LIBFT_DIR)/
	@echo "\033[35m\t\t[COMPILING] $@\033"
	@#$(CC) -o $@ -I $(INC_DIR) -L $(LIBFT_DIR)/ $(LIB_FLAG) $(OBJ)
	@#COMPILE EXECUTABLE ^^^^^^
	@ar rcs $(NAME) $(OBJ) $(LIBFT_DIR)/obj/*.o
	@#COMPILE LIBRARY ^^^^^^^
	@echo "\033[32m\t\t[COMPILED SUCCESSFULLY]\033"
	@#DON'T TOUCH ^^^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "\033[36m\t\t[Building]\033[0m $@"
	@#norminette $<
	@mkdir -p $(OBJ_DIR)
	@$(CC) -I $(INC_DIR) -o $@ -c $<
	@echo "\033[33m\t\t[SUCCESS]\033[0m"
	@#DON'T TOUCH ^^^

clean: cleanlib
	@echo "\033[31m\t\t[CLEANING]\t$(OBJ_DIR)\033[0m"
	@rm -rf $(OBJ_DIR)
	@#DON'T TOUCH ^^^

cleanlib:
	@echo "\033[31m\t\t[CLEANING]\t$(LIB_DIR)\033[0m"
	@make clean -C $(LIBFT_DIR)
	@#ADD ADDITIONAL LIBRARIES HERE ^^^

fclean: clean fcleanlib
	@echo "\033[31m\t\t[FCLEAN]\t$(NAME)\033[0m"
	@rm -f $(NAME)
	@#ADD ADDITIONAL NAME FILES HERE ^^^

fcleanlib:
	@echo "\033[31m\t\t[FCLEAN]\t$(LIB_DIR)]\033[0m"
	@make fclean -C $(LIBFT_DIR)
	@#ADD ADDITIONAL LIBRARIES HERE ^^^

re: fclean all

workspace:
	@echo "\033[36m\t\t[Building $@]\033[0m"
	@mkdir -p $(INC_DIR)
	@mkdir -p $(SRC_DIR)
	@mkdir -p $(LIB_DIR)
	@touch author
	@echo $(AUTHOR) > author
################################################################################
#								SPECIAL
################################################################################

.PHONEY := all clean fclean re workspace
#ADD PHONEY HERE ^^^

#.SILENT:
#DON'T TOUCH ^^^

.PRECIOUS := author
#ADD PRECIOUS HERE ^^^
