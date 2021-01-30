NAME	= LostAndFound

CC	= gcc -g3 -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio


RM	= rm -f

SRCS	= ./lib/get_mouse.c \
	  ./lib/help_dev.c \
	  ./main.c \
	  ./src/fc_event.c/click_menu.c \
	  ./src/fc_event.c/intro.c \
	  ./src/fc_event.c/map.c \
	  ./src/fc_event.c/menu.c \
	  ./src/fc_event.c/rect.c \
	  ./src/fc_init/init_clock.c \
	  ./src/fc_init/init_intro.c \
	  ./src/fc_event.c/click_pause.c \
	  ./src/fc_init/init_map.c \
	  ./src/fc_init/init_menu.c \
	  ./src/fc_init/init_perso.c 

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
