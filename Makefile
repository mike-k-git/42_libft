CC = cc
CFLAGS = -Wall -Wextra -Werror -MMD -MP

BLUE_BOLD  = \033[34;1;m
GREEN_BOLD = \033[32;1;m
CYAN_BOLD  = \033[36;1;m
YELLOW     = \033[33m
RESET      = \033[0m

NAME = libft.a

SRC = ft_atoi.c       \
	  ft_bzero.c      \
	  ft_calloc.c     \
	  ft_isalnum.c    \
	  ft_isalpha.c    \
	  ft_isascii.c    \
	  ft_isdigit.c    \
	  ft_isprint.c    \
	  ft_itoa.c       \
	  ft_memchr.c     \
	  ft_memcmp.c     \
	  ft_memcpy.c     \
	  ft_memmove.c    \
	  ft_memset.c     \
	  ft_putchar_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c  \
	  ft_putstr_fd.c  \
	  ft_split.c      \
	  ft_strchr.c     \
	  ft_strdup.c     \
	  ft_striteri.c   \
	  ft_strjoin.c    \
	  ft_strlcat.c    \
	  ft_strlcpy.c    \
	  ft_strlen.c     \
	  ft_strmapi.c    \
	  ft_strncmp.c    \
	  ft_strnstr.c    \
	  ft_strrchr.c    \
	  ft_strtrim.c    \
	  ft_substr.c     \
	  ft_tolower.c    \
	  ft_toupper.c    \
	  ft_ultoa_base.c

SRC_BONUS = ft_lstadd_back.c  \
			ft_lstadd_front.c \
			ft_lstclear.c     \
			ft_lstdelone.c    \
			ft_lstiter.c      \
			ft_lstlast.c      \
			ft_lstmap.c       \
			ft_lstnew.c       \
			ft_lstsize.c

OBJ_DIR = obj

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)
DEP = $(OBJ:.o=.d)

OBJ_BONUS = $(SRC_BONUS:%.c=${OBJ_DIR}/%.o)
DEP_BONUS = $(OBJ_BONUS:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Creating library $(BLUE_BOLD)$@$(RESET)"
	@ar rcs $@ $^

bonus: .bonus

.bonus: $(NAME) $(OBJ_BONUS)
	@echo "Adding $(GREEN_BOLD)bonus$(RESET) to library"
	@ar rs $< $(OBJ_BONUS)
	@touch .bonus

${OBJ_DIR}/%.o: %.c
	@mkdir -p $(dir $@)
	@echo "Compiling $(CYAN_BOLD)$<$(RESET)"
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@echo "$(YELLOW)Cleaning object files$(RESET)"
	@rm -f $(OBJ) $(OBJ_BONUS) .bonus
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "$(YELLOW)Removing the library$(RESET)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

-include $(DEP)
