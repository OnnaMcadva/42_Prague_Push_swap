# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: annavm <annavm@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 18:30:09 by annavm            #+#    #+#              #
#    Updated: 2024/04/27 18:40:12 by annavm           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEF_COLOR    = \033[0;39m
GRAY         = \033[0;90m
RED          = \033[0;91m
GREEN        = \033[0;92m
YELLOW       = \033[0;93m
BLUE         = \033[0;94m
MAGENTA      = \033[0;95m
CYAN         = \033[0;96m
WHITE        = \033[0;97m
ORANGE       = \033[38;5;220m
GREEN_BR     = \033[38;5;118m

LIBFT_DIR    = libft/
LIBFT_NAME   = libft.a
LIBFT        = $(LIBFT_DIR)$(LIBFT_NAME)

NAME         = push_swap
CC           = cc
FLAGS        = -Wall -Werror -Wextra -g
SRC          = arg_check.c utils.c ft_list.c push.c \
               reverse_rotate.c rotate.c simple_2_3.c \
               simple_4_5.c stack_sort.c stack_index.c \
               swap.c main.c \

OBJ          = $(SRC:.c=.o)

# Цели
all: $(LIBFT) $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@echo "\t[ $(GREEN)✔$(DEF_COLOR) ]\t$(MAGENTA)Getting libft ready$(DEF_COLOR)"
	@make -s -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	@$(RM) $(NAME)
	@echo "\t[ $(GREEN)✔$(DEF_COLOR) ]\t$(GREEN_BR)$(NAME) is ready!$(DEF_COLOR)"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(MLXFLAGS) $(LIBFT)  -s


clean:
	@echo "\t[ $(GREEN)✔$(DEF_COLOR) ]\t$(YELLOW)Removing libft$(DEF_COLOR)"
	@make clean -s -C $(LIBFT_DIR)
	@$(RM) $(OBJ)

fclean: clean
	@echo "\t[ $(GREEN)✔$(DEF_COLOR) ]\t$(RED)Removing $(NAME)...$(DEF_COLOR)"
	@$(RM) $(NAME)
	@$(RM) $(LIBFT_DIR)$(LIBFT_NAME)

re: fclean all
	@echo "\t[ $(GREEN)✔$(DEF_COLOR) ]\t$(BLUE)Cleaned and rebuilt everything for $(NAME).$(DEF_COLOR)"

# Phony targets
.PHONY: all clean fclean re

