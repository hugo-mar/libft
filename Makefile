NAME = libft.a

# Compiler
CC = cc

# Remove command
RM = rm -f

# Directory containing the source files
SRC_DIR = .

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files to be compiled into objects
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

# Source files for the bonus part
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
	ft_lstiter.c ft_lstmap.c

# Object files generated from source files
OBJS = $(SRCS:%.c=$(SRC_DIR)/%.o)
BONUS_OBJS = $(BONUS_SRCS:%.c=$(SRC_DIR)/%.o)

# Rule to compile individual source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the target library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

# Rule to build the library
all: $(NAME)

# Rule to create the bonus
bonus: $(OBJS) $(BONUS_OBJS)
	@$(RM) $(NAME)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Rule to remove object files
clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)

# Rule to remove object files and the target library
fclean: clean
	@$(RM) $(NAME)

# Rule to perform a full rebuild
re: fclean all

#PHONY
.PHONY: all bonus clean fclean re

# End of Makefile
