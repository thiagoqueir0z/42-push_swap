# ==============================================================================
#                                     CONFIG
# ==============================================================================

NAME        = push_swap
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -g3

LIBFT_DIR   = ./libft
INC_DIR     = ./include
SRC_DIR     = ./src
OBJ_DIR     = ./obj_dir

.DELETE_ON_ERROR:

# ==============================================================================
#                                     COLORS
# ==============================================================================

D           = \033[0m
B           = \033[1m
R           = \033[31m
CYA         = \033[36m
GRN         = \033[32m
YEL         = \033[33m

# ==============================================================================
#                                 SOURCES & OBJECTS
# ==============================================================================

SRC         = $(SRC_DIR)/main.c \
              $(SRC_DIR)/parsing/checks.c \
              $(SRC_DIR)/parsing/parsing.c \
              $(SRC_DIR)/parsing/utils.c \
              $(SRC_DIR)/stack/stack_utils.c \
              $(SRC_DIR)/stack/stack_free.c \
              $(SRC_DIR)/rules/rules_swap.c \
              $(SRC_DIR)/rules/rules_push.c \
              $(SRC_DIR)/rules/rules_rotate.c \
              $(SRC_DIR)/rules/rules_rrotate.c \
              $(SRC_DIR)/sort/sort_tiny.c \
              $(SRC_DIR)/sort/sort_five.c \
              $(SRC_DIR)/sort/sort_radix.c

OBJ         = $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRC))

LIBFT       = $(LIBFT_DIR)/libft.a
INCLUDES    = -I$(INC_DIR) -I$(LIBFT_DIR)

# ==============================================================================
#                                     RULES
# ==============================================================================

all: $(NAME)

$(LIBFT):
	@echo "$(B)$(CYA)Compiling Libft...$(D)"
	@make -C $(LIBFT_DIR) --no-print-directory

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "$(B)$(GRN)Make done, evaluate me $(NAME)...$(D)"

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

tester:		## Run the tester script
	@echo "   $(B)$(CYA)Running Push Swap Tester$(D)"
	@curl https://raw.githubusercontent.com/hu8813/tester_push_swap/main/pstester.py | python3 -

visualizer:
	@echo "   $(B)$(CYA)Setting up Push Swap Visualizer$(D)"
	@if [ ! -d "push_swap_visualizer" ]; then \
		echo "   $(B)$(YEL)Cloning visualizer repository$(D) 💾💾"; \
		git clone https://github.com/o-reo/push_swap_visualizer.git; \
	else \
		echo "   $(B)$(YEL)Visualizer repository already exists$(D)"; \
	fi
	@echo "   $(B)$(YEL)Building visualizer 🔨$(D)"
	@mkdir -p push_swap_visualizer/build 
	@cd push_swap_visualizer/build && cmake .. -DCMAKE_POLICY_VERSION_MINIMUM=3.5 && make
	@echo "   $(B)$(GRN)Visualizer build complete$(D): $(_SUCCESS)"
	@echo "   $(B)$(CYA)Running visualizer$(D)"
	@cd push_swap_visualizer/build && ./bin/visualizer

clean:
	@echo "$(B)$(R)Cleaning objects...$(D)"
	@make clean -C $(LIBFT_DIR) --no-print-directory
	rm -rf $(OBJ_DIR)

fclean: clean
	@echo "$(B)$(R)Full clean...$(D)"
	@make fclean -C $(LIBFT_DIR) --no-print-directory
	@rm -rf push_swap_visualizer
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
