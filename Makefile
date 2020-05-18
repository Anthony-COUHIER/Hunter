##
## EPITECH PROJECT, 2019
## MUL_my_hunter_2019
## File description:
## Makefile
##

NAME	= my_hunter

CC	= gcc

RM	= rm -f

SRCS	= ./src/my/Clock/init_clock_anim.c \
		./src/my/Clock/init_clock_score.c \
		./src/my/Clock/init_clock_mouv.c \
		./src/my/Create/create_background.c \
		./src/my/Create/create_background_menu.c \
		./src/my/Create/create_coin.c \
		./src/my/Create/create_coin_score_lose.c \
		./src/my/Create/create_hand.c \
		./src/my/Create/create_minicoin.c \
		./src/my/Create/create_play.c \
		./src/my/Create/create_rect_play.c \
		./src/my/Create/create_rect_background_play.c \
		./src/my/Create/create_sound_g.c \
		./src/my/Create/create_sound_coin.c \
		./src/my/Create/create_text_hunter.c \
		./src/my/Create/create_text_lose.c \
		./src/my/Create/create_text_retry.c \
		./src/my/Create/create_text_play.c \
		./src/my/Create/create_text_exit.c \
		./src/my/Create/create_text_playing.c \
		./src/my/Create/create_text_how_playing.c \
		./src/my/Create/create_text_score_lose.c \
		./src/my/Create/create_text.c \
		./src/my/Create/create.c \
		./src/my/in_game/animation.c \
		./src/my/in_game/click.c \
		./src/my/in_game/in_back.c \
		./src/my/in_game/in_game.c \
		./src/my/in_game/score_anim.c \
		./src/my/in_game/score.c \
		./src/my/in_game/spawn_coin.c \
		./src/my/in_game/update_score.c \
		./src/my/end_game/end_game.c \
		./src/my/end_game/click_end_game.c \
		./src/my/Menu/click_menu.c \
		./src/my/Menu/my_menu.c \
		./src/my/destroy.c \
		./src/my/display.c \
		./src/my/genwindow.c \
		./src/my/init.c \
		./src/my/my_close.c \
		./src/my/main.c \
		./src/my/my_mouse.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
