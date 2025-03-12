CC = cc
CFLAGS =  -I./.
AR = ar rcs
NAME = libft.a
OBJ_DIR = objects

SRCS = \
    memory/ft_memchr.c memory/ft_memcmp.c memory/ft_memcpy.c \
    memory/ft_memmove.c memory/ft_memset.c \
    monolist/ft_lstadd_back_bonus.c monolist/ft_lstadd_front_bonus.c \
    monolist/ft_lstclear_bonus.c monolist/ft_lstdelone_bonus.c \
    monolist/ft_lstiter_bonus.c monolist/ft_lstlast_bonus.c \
    monolist/ft_lstmap_bonus.c monolist/ft_lstnew_bonus.c \
    monolist/ft_lstsize_bonus.c \
    put/ft_putchar_fd.c put/ft_putnbr_fd.c put/ft_putendl_fd.c put/ft_putstr_fd.c \
    str/ft_strchr.c str/ft_strdup.c str/ft_striteri.c str/ft_strjoin.c \
    str/ft_strlcat.c str/ft_strlcpy.c str/ft_strlen.c str/ft_strmapi.c \
    str/ft_strncmp.c str/ft_strnstr.c str/ft_strrchr.c str/ft_strtrim.c \
    str/ft_substr.c str/ft_tolower.c str/ft_toupper.c \
    util/ft_atoi.c util/ft_bzero.c util/ft_calloc.c util/ft_isalnum.c \
    util/ft_isalpha.c util/ft_isascii.c util/ft_isdigit.c util/ft_isprint.c \
    util/ft_itoa.c util/ft_split.c \
    twinlist/create_dlist.c \ twinlist/create_node.c \
    twinlist/free_tlist.c \ twinlist/add_back.c \ twinlist/add_front.c
    
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

