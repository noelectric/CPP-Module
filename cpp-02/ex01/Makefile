CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

CFILES = Fixed.cpp  main.cpp\

OFILES = $(addprefix $(OBJ_DIR)/,$(CFILES:.cpp=.o))

OBJ_DIR = ./OBJ

INC = Fixed.hpp

SRC_DIR = .

NAME = fixed

$(NAME) : $(OFILES)
	@$(CC) $(OFILES) $(CFLAGS) -o $(NAME)
	@echo "Done for Fixed"

$(OBJ_DIR) :
	@mkdir OBJ

$(OFILES) : $(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(INC) | $(OBJ_DIR)
	@$(CC) -c $(CFLAGS) $< -o $@

clean :
	@rm -rf $(OBJ_DIR)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

all : $(NAME)

.PHONY : re all clean fclean