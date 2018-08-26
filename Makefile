NAME		= push_swap
FILENAMES 	= check_duplicates.c \
			  dump.c \
			  free_all.c \
			  initialize.c \
			  peek.c \
			  pop.c \
			  push.c \
			  push_swap.c \
			  push_to.c \
			  rev_rot.c \
			  rot.c \
			  swap.c \

HDIR     	= ./includes
SDIR     	= ./src
LDIR        = ./libft/
ODIR     	= ./obj
SRC      	= $(addprefix $(SDIR)/, $(FILENAMES))
OBJ      	= $(addprefix $(ODIR)/, $(FILENAMES:.c=.o))

.PHONY: all clean fclean re

CC       	= gcc
HFLAGS   	= -I $(HDIR)
LFLAGS      = -L $(LDIR) -lft
CFLAGS   	= -Wall -Werror -Wextra $(HFLAGS)

all : $(NAME)

$(NAME) : $(OBJ)
	make re -C $(LDIR)
	@$(CC) -o $(@) $? $(HFLAGS) $(LFLAGS)
	@echo "\033[1;32;40mDone making push_swap! \033[0m"
$(ODIR)/%.o : $(SDIR)/%.c
	@mkdir -p $(ODIR)
	@$(CC) $(CFLAGS) -o $@ -c $?

clean:
	@echo removing objects...
	@rm -f $(OBJ)
	@rm -rf $(ODIR)
	@echo Done!
fclean: clean
	@echo removing library...
	@rm -f $(NAME)
	@echo Done!
re: fclean all

