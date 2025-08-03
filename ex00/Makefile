# ================== VARIABLES ==================
# Nom de l'exécutable
NAME = megaphone

# FICHIERS
SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

# COMPILATION
GCC = g++ -Wall -Werror -Wextra -std=c++98
RM = rm -f

# ================== REGLES ==================
all		: $(NAME)

$(NAME): $(OBJS)
				$(GCC) $(OBJS) -o $(NAME)

# Compilation des fichiers .o
%.o: %.cpp
		$(GCC) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
