gcc -o run \
./src/push_swap.c ./src/initialize.c ./src/pop.c \
./src/push.c ./src/peek.c ./src/dump.c ./src/rot.c \
./src/rev_rot.c ./src/free_all.c ./src/swap.c \
 -I ./includes -L ./libft -lft \
&& ./run
#peek.c push
