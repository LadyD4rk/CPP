#cores
BG_BLUE = \033[44m
WHITE = \033[97m
BLACK = \033[30m
CINZA = \033[47m\033[30m
BLUE = \033[34m
RESET = \033[0m

#flags
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
EXEC = megaphone
OBJ_DIR = Obj

SRC = megaphone.cpp
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(EXEC)

$(EXEC): $(OBJ)
		@echo "$(BG_BLUE)$(BLACK)[CREATE] MEGAAAAAphone *-* $(EXEC)$(RESET)"
		@$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXEC)

$(OBJ_DIR)/%.o: %.cpp
		@mkdir -p $(OBJ_DIR)
		@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
		@rm -rf $(OBJ_DIR)

fclean: clean
		@echo " 🗑️  Andou, andou e no lixo parouu!"
		@rm -f $(EXEC)

git:
	@git add .
	@git commit -m "$(m)"
	@git push

norma:
	@norminette .

re: fclean all

.PHONY: re fclean clean all git
