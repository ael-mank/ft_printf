# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 16:47:31 by ael-mank          #+#    #+#              #
#    Updated: 2023/12/09 16:48:12 by ael-mank         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME		= libftprintf.a
INCLUDE		= include
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -I$(INCLUDE)
DEBUG_FLAGS = -g
RM			= rm -f
AR			= ar rcs

GREEN=\033[0;32m
YELLOW=\033[0;33m
BLUE=\033[0;34m
MAGENTA=\033[0;35m
NC=\033[0m

# Sources
SRC_FILES	= ft_printf ft_printchars ft_printptr minilibft ft_checktype ft_flags ft_itoa ft_printhexa \
		ft_printnb ft_printunsigned ft_get_length ft_create_array ft_justify_integer \
		ft_str_handler ft_integer_handler ft_justify_hexa ft_justifyptr ft_justify_integer2

SRC		= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ		= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

# Rules
.PHONY: all clean fclean re help debug norm

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "$(GREEN)Compiled ✓ $(NAME)$(NC)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@echo "$(YELLOW)Compiling $<...$(NC)"
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

bonus:$(NAME)

clean:
	@$(RM) -rf $(OBJ_DIR)
	@echo "$(MAGENTA)Cleaned object files ✓ $(NC)"

fclean: clean
	@$(RM) -f $(NAME)
	@echo "$(MAGENTA)Cleaned $(NAME) ✓ $(NC)"

re: fclean all
	@echo "$(BLUE)Cleaned and recompiled $(NAME) ✓ $(NC)"

debug: CFLAGS += $(DEBUG_FLAGS)
debug: all

norm:
	@norminette $(SRC) $(INCLUDE) | grep -v Norme -B1 || true

help:
	@echo "Available targets:"
	@echo "  $(BLUE)all$(NC)   : Build the project"
	@echo "  $(BLUE)clean$(NC) : Remove object files"
	@echo "  $(BLUE)fclean$(NC): Remove object files and the executable"
	@echo "  $(BLUE)re$(NC)    : Rebuild the project"
	@echo "  $(BLUE)bonus$(NC) : Build the project with bonus features"
	@echo "  $(BLUE)debug$(NC) : Build the project with debug flags"
	@echo "  $(BLUE)norm$(NC)  : Check the norm of the project"