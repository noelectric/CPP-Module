CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

CFILES = HumanA.cpp  HumanB.cpp  main.cpp  Weapon.cpp\

OFILES = $(addprefix $(OBJ_DIR)/,$(CFILES:.cpp=.o))

OBJ_DIR = ./OBJ

SRC_DIR = .

INC = HumanA.hpp  HumanB.hpp  Weapon.hpp

NAME = a.out

$(NAME) : $(OFILES)
	@$(CC) $(OFILES) -o $(NAME)
	@echo "Done for Main"

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