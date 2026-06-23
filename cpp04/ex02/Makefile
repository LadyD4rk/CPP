#cores
BG_BLUE = \033[44m
WHITE = \033[97m
BLACK = \033[30m
CINZA = \033[47m\033[30m
BLUE = \033[34m
RESET = \033[0m

#flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -Wno-implicit-fallthrough -std=c++98
SRC_FILES = src/Animal.cpp src/Cat.cpp src/Dog.cpp src/WrongAnimal.cpp \
		src/WrongCat.cpp src/Brain.cpp
EXEC = Animals
OBJ_DIR = Obj

SRC = $(SRC_FILES) main.cpp
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(EXEC)

$(EXEC): $(OBJ)
		@echo "$(BG_BLUE)$(BLACK)[CREATE] $(EXEC) *-* $(RESET)"
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

re: fclean all

.PHONY: re fclean clean all git