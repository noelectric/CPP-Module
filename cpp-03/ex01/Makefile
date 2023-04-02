CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

CFILES = ClapTrap.cpp  main.cpp ScavTrap.cpp

OFILES = $(addprefix $(OBJ_DIR)/,$(CFILES:.cpp=.o))

OBJ_DIR = ./OBJ

INC = ClapTrap.hpp ScavTrap.hpp

SRC_DIR = .

NAME = scavtrap

$(NAME) : $(OFILES)
	@$(CC) $(OFILES) $(CFLAGS) -o $(NAME)
	@echo "Done for ScavTrap"

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