NAME = libft.a

CC = gcc

INCLUDE = includes

CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE) -c

SRCS =	srcs/ft_strlen.c		\
		srcs/ft_strnlen.c		\
		srcs/ft_strlcat.c		\
	 	srcs/ft_putchar.c		\
		srcs/ft_putchar_fd.c	\
		srcs/ft_putstr.c		\
		srcs/ft_putstr_fd.c		\
		srcs/ft_putendl.c		\
		srcs/ft_putendl_fd.c	\
		srcs/ft_putnbr.c		\
		srcs/ft_putnbr_fd.c		\
		srcs/ft_bzero.c			\
		srcs/ft_strdel.c		\
		srcs/ft_lstdelone.c		\
		srcs/ft_lstdel.c		\
		srcs/ft_lstadd.c		\
		srcs/ft_lstiter.c		\
		srcs/ft_memset.c		\
		srcs/ft_memmove.c		\
		srcs/ft_memcpy.c		\
		srcs/ft_memccpy.c		\
		srcs/ft_memchr.c		\
		srcs/ft_memrchr.c		\
		srcs/ft_memalloc		\
		srcs/ft_memdel.c		\
		srcs/ft_strcpy.c		\
		srcs/ft_strncpy.c		\
		srcs/ft_strchr.c		\
		srcs/ft_strrchr.c		\
		srcs/ft_strmap.c		\
		srcs/ft_strmapi.c		\
		srcs/ft_substr.c		\
		srcs/ft_strjoin.c		\
		srcs/ft_strtrim.c		\
		srcs/ft_split.c			\
		srcs/ft_strstr.c		\
		srcs/ft_strnstr.c		\
		srcs/ft_strcat.c		\
		srcs/ft_strncat.c		\
		srcs/ft_itoa.c			\
		srcs/ft_strdup.c		\
		srcs/ft_strndup.c		\
		srcs/ft_strcmp.c		\
		srcs/ft_strncmp.c		\
		srcs/ft_isupper.c		\
		srcs/ft_islower.c		\
		srcs/ft_isalpha.c		\
		srcs/ft_isdigit.c		\
		srcs/ft_isalnum.c		\
		srcs/ft_isascii.c		\
		srcs/ft_isprint.c		\
		srcs/ft_toupper.c		\
		srcs/ft_tolower.c		\
		srcs/ft_isspace.c		\
		srcs/ft_atoi.c			\
		srcs/ft_memcmp.c		\
		srcs/ft_strequ.c		\
		srcs/ft_lstnew.c		\
		srcs/ft_lstmap.c

OBJ = $(SRCS:.c=.o)

AR = ar rc

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all fclean clean re
