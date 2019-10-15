SRCS_PATH = ./

SRCS_NAME =	ft_strlen.c				\
			ft_strlcat.c			\
			ft_strlcpy.c			\
			ft_putchar_fd.c			\
			ft_putstr_fd.c			\
			ft_putendl_fd.c			\
			ft_putnbr_fd.c			\
			ft_bzero.c				\
			ft_memset.c				\
			ft_memmove.c			\
			ft_memcpy.c				\
			ft_memccpy.c			\
			ft_memchr.c				\
			ft_calloc.c				\
			ft_strchr.c				\
			ft_strrchr.c			\
			ft_strmapi.c			\
			ft_substr.c				\
			ft_strjoin.c			\
			ft_strtrim.c			\
			ft_split.c				\
			ft_strnstr.c			\
			ft_itoa.c				\
			ft_strdup.c				\
			ft_strncmp.c			\
			ft_isalpha.c			\
			ft_isdigit.c			\
			ft_isalnum.c			\
			ft_isascii.c			\
			ft_isprint.c			\
			ft_toupper.c			\
			ft_tolower.c			\
			ft_atoi.c				\
			ft_memcmp.c


SRCS_NAM2 =	ft_strequ_bonus.c		\
			ft_lstsize_bonus.c		\
			ft_strnlen_bonus.c		\
			ft_strdel_bonus.c		\
			ft_lstnew_bonus.c		\
			ft_putnbr_bonus.c		\
			ft_lstlast_bonus.c		\
			ft_lstmap_bonus.c		\
			ft_lstclear_bonus.c		\
			ft_lstdelone_bonus.c	\
			ft_putendl_bonus.c		\
			ft_isspace_bonus.c		\
			ft_charset_bonus.c		\
			ft_isupper_bonus.c		\
			ft_islower_bonus.c		\
			ft_strndup_bonus.c		\
			ft_putstr_bonus.c		\
			ft_strcmp_bonus.c		\
			ft_strcat_bonus.c		\
			ft_strstr_bonus.c		\
			ft_strncat_bonus.c		\
			ft_strmap_bonus.c		\
		 	ft_putchar_bonus.c		\
			ft_lstadd_front_bonus.c	\
			ft_lstadd_back_bonus.c	\
			ft_strcpy_bonus.c		\
			ft_strncpy_bonus.c		\
			ft_memrchr_bonus.c		\
			ft_lstiter_bonus.c

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_NAME))
SRCS2 = $(addprefix $(SRCS_PATH), $(SRCS_NAM2))
HEADERS = ./
OBJS = $(SRCS:.c=.o)
OBJS2 = $(SRCS2:.c=.o)
NAME = libft.a
RM = rm -f
AR = ar
AFLAGS = -sucr
CFLAGS += -Wall -Wextra -Werror -I $(HEADERS)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(AFLAGS) $(NAME) $(OBJS)

bonus: $(SRCS_NAME) $(OBJS) $(OBJS2)
	$(AR) $(AFLAGS) $(NAME) $(OBJS) $(OBJS2)

clean:
	$(RM) $(OBJS) $(OBJS2)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all
.PHONY: all clean fclean re
