#
#   Created by Oleh Kurachenko
#          aka okurache
#   as a part of PPaPUCpp_Stroustrup
#
#   ask me      oleh.kurachenko@gmail.com , I'm ready to help
#   GitHub      https://github.com/OlehKurachenko
#   rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
#

NAME = cpp11_binary

CC = g++ -std=c++11

OBJ_DIR = obj

SRC =	main.cpp \
		weird.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	$(CC) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all