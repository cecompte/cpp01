CC				= c++
CFLAGS			= -g3 -std=c++98 -Wall -Wextra -Werror -MMD -MP

NAME			= replace
INCLUDES		= -I.

# Sources
SRC				= main.cpp replace.cpp

# Test sources
TEST_SRC		= tests.cpp

# Objects
OBJ_PATH		= obj/
OBJ				= $(SRC:.cpp=.o)
OBJECTS			= $(addprefix $(OBJ_PATH), $(OBJ))
DEP				= $(SRC:.cpp=.d)
DEPS			= $(addprefix $(OBJ_PATH), $(DEP))

# Test objects
TEST_OBJ		= $(TEST_SRC:.cpp=.o)
TEST_OBJECTS	= $(addprefix $(OBJ_PATH), $(TEST_OBJ))
TEST_NAME		= tests

# Colors for display
RED				= \e[31m
GREEN			= \e[32m
YELLOW			= \e[33m
BLUE			= \e[34m
MAGENTA			= \e[35m
CYAN			= \e[36m
RESET			= \e[m

all: $(NAME)

$(NAME): $(OBJECTS)
	@printf "$(BLUE)%s$(RESET): $(YELLOW)Building $(NAME)...$(RESET)\n" $(NAME)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@printf "$(BLUE)%s$(RESET): $(GREEN)Successfully built $(NAME)$(RESET)\n" $(NAME)

$(OBJ_PATH)%.o: %.cpp | $(OBJ_PATH)
	@printf "$(BLUE)%s$(RESET): $(MAGENTA)Compiling$(RESET) $<\n" $(NAME)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_PATH):
	@mkdir $(OBJ_PATH)

test: $(TEST_OBJECTS) obj/replace.o
	@printf "$(BLUE)%s$(RESET): $(YELLOW)Building test program...$(RESET)\n" $(TEST_NAME)
	@$(CC) $(CFLAGS) $(TEST_OBJECTS) obj/replace.o -o $(TEST_NAME)
	@printf "$(BLUE)%s$(RESET): $(GREEN)Successfully built $(TEST_NAME)$(RESET)\n" $(TEST_NAME)
	@printf "$(CYAN)Running tests...$(RESET)\n\n"
	@./$(TEST_NAME)

clean:
	@printf "$(BLUE)%s$(RESET): $(RED)Cleaning object files...$(RESET)\n"
	@rm -rf obj

fclean: clean
	@printf "$(BLUE)%s$(RESET): $(RED)Full clean...$(RESET)\n"
	@rm -f $(NAME) $(TEST_NAME)
	@rm -f test_*.txt test_*.txt.replace

re: fclean all

bonus: all

.PHONY: all clean fclean re