CC = cc
IFLAGS = -I./.
CFLAGS = -O2

SRCS = \
    file/ft_putchar_fd.c \
    file/ft_putnbr_fd.c \
    file/ft_putendl_fd.c \
    file/ft_putstr_fd.c \
    lib/ft_atoi.c \
    lib/ft_bzero.c \
    lib/ft_calloc.c \
    lib/ft_isalnum.c \
    lib/ft_isalpha.c \
    lib/ft_isascii.c \
    lib/ft_isdigit.c \
    lib/ft_isprint.c \
    lib/ft_itoa.c \
    lib/ft_lstadd_back_bonus.c \
    lib/ft_lstadd_front_bonus.c \
    lib/ft_lstclear_bonus.c \
    lib/ft_lstdelone_bonus.c \
    lib/ft_lstiter_bonus.c \
    lib/ft_lstlast_bonus.c \
    lib/ft_lstmap_bonus.c \
    lib/ft_lstnew_bonus.c \
    lib/ft_lstsize_bonus.c \
    lib/ft_substr.c \
    lib/ft_tolower.c \
    lib/ft_toupper.c \
    memory/ft_memchr.c \
    memory/ft_memcmp.c \
    memory/ft_memmove.c \
    memory/ft_memcpy.c \
    memory/ft_memset.c \
    monolist/ft_lstadd_back_bonus.c \
    monolist/ft_lstadd_front_bonus.c \
    monolist/ft_lstclear_bonus.c \
    monolist/ft_lstdelone_bonus.c \
    monolist/ft_lstiter_bonus.c \
    monolist/ft_lstlast_bonus.c \
    monolist/ft_lstmap_bonus.c \
    monolist/ft_lstnew_bonus.c \
    monolist/ft_lstsize_bonus.c

OBJS = $(SRCS:%.c=objects/%.o)

all: libft.a

libft.a: $(OBJS)
	ar rcs $@ $(OBJS)

objects/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all
