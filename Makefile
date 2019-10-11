SRCS_PATH = ./

SRCS_NAME =	ft_strlen.c		\
		ft_strnlen.c		\
		ft_strlcat.c		\
		ft_strlcpy.c		\
	 	ft_putchar.c		\
		ft_putchar_fd.c	\
		ft_putstr.c		\
		ft_putstr_fd.c		\
		ft_putendl.c		\
		ft_putendl_fd.c	\
		ft_putnbr.c		\
		ft_putnbr_fd.c		\
		ft_bzero.c			\
		ft_strdel.c		\
		ft_lstadd_front_bonus.c	\
		ft_lstadd_back_bonus.c	\
		ft_lstiter_bonus.c		\
		ft_memset.c		\
		ft_memmove.c		\
		ft_memcpy.c		\
		ft_memccpy.c		\
		ft_memchr.c			\
		ft_memrchr.c		\
		ft_calloc.c			\
		ft_strcpy.c			\
		ft_strncpy.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strmap.c			\
		ft_strmapi.c		\
		ft_substr.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_split.c			\
		ft_strstr.c			\
		ft_strnstr.c		\
		ft_strcat.c			\
		ft_strncat.c		\
		ft_itoa.c			\
		ft_strdup.c		\
		ft_strndup.c		\
		ft_strcmp.c		\
		ft_strncmp.c		\
		ft_isupper.c		\
		ft_islower.c		\
		ft_isalpha.c		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_isspace.c		\
		ft_charset.c		\
		ft_atoi.c			\
		ft_memcmp.c		\
		ft_strequ.c		\
		ft_lstsize_bonus.c		\
		ft_lstnew_bonus.c		\
		ft_lstlast_bonus.c		\
		ft_lstmap_bonus.c		\
		ft_lstclear_bonus.c		\
		ft_lstdelone_bonus.c

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_NAME))
HEADERS = ./
OBJS = $(SRCS:.c=.o)
NAME = libft.a
RM = rm -f
AR = ar
AFLAGS = -scr
CFLAGS += -Wall -Wextra -Werror -I $(HEADERS)

all: ${NAME}

$(NAME): $(OBJS)
	$(AR) $(AFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
