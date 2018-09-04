PUSH		= push_swap
CHECK		= checker
FILENAMES 	= check_duplicates.c \
			  dump.c \
			  peek.c \
			  pop.c \
			  push.c \
			  push_to.c \
			  rev_rot.c \
			  rev_rot_both.c \
			  rot.c \
			  rot_both.c \
			  swap.c \
			  swap_both.c \
			  algo.c \
			  is_sorted.c \
			  init_score.c \
			  quick_select.c \
			  set_bounds.c \
			  rot_silent.c \
			  bubble_sort.c \
			  gen_loops.c \
			  is_loop.c \
			  is_almost.c \
			  rev_arr.c \
			  instruction.c \
			  initialize.c \
			  free_all.c \

HDIR     	= ./includes
SDIR     	= ./src/
LDIR        = ./libft/
ODIR     	= ./obj
SRC      	= $(addprefix $(SDIR)/, $(FILENAMES))
OBJ      	= $(addprefix $(ODIR)/, $(FILENAMES:.c=.o))

.PHONY: all clean fclean re

CC       	= gcc
HFLAGS   	= -I $(HDIR)
LFLAGS      = -L $(LDIR) -lft
CFLAGS   	= -Wall -Werror -Wextra $(HFLAGS)

all : $(PUSH) $(CHECK)

$(PUSH) : $(OBJ)
	@make -C $(LDIR)
	@$(CC) -o $(@) ./obj/push_swap.o $? $(HFLAGS) $(LFLAGS)
	@echo "\033[1;32;40mDone making push_swap! \033[0m"

$(CHECK) : $(OBJ)
	@$(CC) -o $(@) ./obj/checker.o $? $(HFLAGS) $(LFLAGS)
	@echo "\033[1;32;40mDone making checker! \033[0m"

$(ODIR)/%.o : $(SDIR)/%.c
	@mkdir -p $(ODIR)
	@$(CC) $(CFLAGS) -o $@ -c -ggdb3 $?
	@$(CC) $(CFLAGS) -o ./obj/push_swap.o -c ./src/push_swap.c
	@$(CC) $(CFLAGS) -o ./obj/checker.o -c ./src/checker.c

clean:
	@echo removing objects...
	@rm -f $(OBJ)
	@rm -rf $(ODIR)
	@echo Done!
fclean: clean
	@make fclean -C $(LDIR) 
	@echo removing binary files...
	@rm -f $(PUSH)
	@rm -f $(CHECK)
	@echo Done!
re: fclean all

norm: 
	norminette ./src/
	norminette ./includes/
