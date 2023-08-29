NAME		=		interest

CC			=		c++

CFLAGS		=		-Wall -Wextra -Werror -std=c++98 -pedantic -g -fsanitize=address	

SRCS		=		interest_calculations.cpp \
					tests.cpp

OBJS		=		${SRCS:.cpp=.o}

INCLUDES	=		interest.hpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Created executable: $(NAME)"

%.o: %.cpp
	@echo "Compiling $<"
	@${CC} ${CFLAGS} -o $@ -c $<

clean:
	@echo "Removing object files"
	@rm -rf $(OBJS)

fclean: clean
	@echo "Removing executable: $(NAME)"
	@rm -rf $(NAME)

run:
	./interest

test: all
	./interest input.txt

re: fclean all