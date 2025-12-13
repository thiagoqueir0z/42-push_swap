# ==============================================================================
#                                     CONFIG
# ==============================================================================

NAME        = push_swap
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -g3

LIBFT_DIR   = ./libft
INC_DIR     = ./include
SRC_DIR     = ./src

# ==============================================================================
#                                 SOURCES & OBJECTS
# ==============================================================================

SRC         = $(SRC_DIR)/main.c \
              $(SRC_DIR)/parsing/checks.c \
              $(SRC_DIR)/parsing/utils.c \
              $(SRC_DIR)/stack/stack_utils.c \
              $(SRC_DIR)/rules/rules_swap.c \
              $(SRC_DIR)/rules/rules_push.c \
              $(SRC_DIR)/rules/rules_rotate.c \
              $(SRC_DIR)/rules/rules_rrotate.c \
              $(SRC_DIR)/sort/sort_tiny.c \
              $(SRC_DIR)/sort/sort_radix.c

OBJ         = $(SRC:.c=.o)

LIBFT       = $(LIBFT_DIR)/libft.a

INCLUDES    = -I$(INC_DIR) -I$(LIBFT_DIR)

# ==============================================================================
#                                     RULES
# ==============================================================================

all: $(NAME)

$(LIBFT):
	@echo "Compiling Libft..."
	@make -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJ)
	@echo "Linking $(NAME)..."
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@echo "Cleaning objects..."
	@make clean -C $(LIBFT_DIR)
	rm -f $(OBJ)

fclean: clean
	@echo "Full clean..."
	@make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re