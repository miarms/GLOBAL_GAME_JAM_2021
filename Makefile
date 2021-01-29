NAME	= LostAndFound

CC	= gcc -g3 -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio

RM	= rm -f

SRCS	= ./main.c \
		./lib/help_dev.c \
	  ./src/fc_init/init_menu.c \
	  ./src/menu.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./inc/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
