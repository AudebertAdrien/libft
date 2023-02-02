BIN_DIR		= bin
NAME		= a.out

SRCS_DIR	= src
#SRCS		:= $(wildcard *.c) $(wildcard src/*.c)
SRCS		= *$(VAR).c src/$(VAR).c
OBJS_DIR	:= obj
OBJS		:= $(patsubst %.c,$(OBJS_DIR)/%.o,$(SRCS))
#OBJS		:= $(SRCS:%c=obj/%o)
INC_DIR		= include

CC		= gcc
ERROR_FLAGS	= -Wall -Wextra -Werror
GDB_FLAGS	= -ggdb3
STD_FLAGS	= -sdt=c99

all: $(NAME)

$(OBJS_DIR)/%.o: %.c
	mkdir -p obj/src
	$(CC) $(GDB_FLAGS) $(ERROR_FLAGS) -I$(INC_DIR) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(ERROR_FLAGS) $^ -o $(BIN_DIR)/$@

clean:
	rm -rf $(OBJS_DIR)/*

fclean: clean
	rm -r $(BIN_DIR)/* 

re: fclean all

.PHONY: all clean fclean
