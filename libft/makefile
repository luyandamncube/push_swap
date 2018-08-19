NAME 	  =	libft.a
FILENAMES =  ft_memset.c ft_bzero.c ft_memmove.c ft_memchr.c \
			 ft_memcmp.c ft_memcpy.c ft_memccpy.c ft_strlen.c \
			 ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
			 ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
			 ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
			 ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			 ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
			 ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
			 ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
			 ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
			 ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c \
			 ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
			 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			 ft_putnbr_fd.c ft_iswhitespace.c ft_isdelimiter.c \
			 ft_strclen.c ft_swapmem.c ft_wordcount.c get_next_line.c \

HDIR	 = ./includes
SDIR	 = ./src
ODIR	 = ./obj
SRC 	 = $(addprefix $(SDIR)/, $(FILENAMES))
OBJ	 	 = $(addprefix $(ODIR)/, $(FILENAMES:.c=.o)) 

.PHONY: all clean fclean re

CC		 = gcc 
AR		 = ar rc

HFLAGS   = -I $(HDIR)
CFLAGS	 = -Wall -Werror -Wextra $(HFLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "\033[1;31;40mDone! \033[0m"
$(ODIR)/%.o: $(SDIR)/%.c
	@mkdir -p $(ODIR)
	@$(CC) -o $@ -c $? $(CFLAGS) 
	
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

norm:
	norminette libft.h
	norminette $(wordlist 1, 20, $(NAME))
	norminette $(wordlist 21, 40, $(NAME))
	norminette $(wordlist 41, 60, $(NAME))
