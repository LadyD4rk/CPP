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
EXEC = PhoneBook
OBJ_DIR = Obj

SRC = main.cpp src/PhoneBook.cpp src/Contact.cpp
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(EXEC)

$(EXEC): $(OBJ)
		@echo "$(BG_BLUE)$(BLACK)[CREATE] Hello, hello, baby, you called? I can't hear a thing *-* $(EXEC)$(RESET)"
		@$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXEC)

$(OBJ_DIR)/%.o: %.cpp
		@mkdir -p $(dir $@)
		@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
		@rm -rf $(OBJ_DIR)

fclean: clean
		@echo " 🗑️  Clean!!!"
		@rm -f $(EXEC)

git:
	@git add .
	@git commit -m "$(m)"
	@git push

norma:
		@norminette .

re: fclean all

.PHONY: re fclean clean all git
