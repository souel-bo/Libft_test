CC = cc
ARCHIVER = ar rcs
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SOURCE = ft_isalpha.c ft_isprint.c ft_memset.c  ft_strlcpy.c ft_strrchr.c \
		 ft_bzero.c   ft_isascii.c ft_memcpy.c  ft_strchr.c  ft_strlen.c \
		 ft_tolower.c ft_toupper.c ft_memmove.c ft_strlcat.c ft_strncmp.c\
		 ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		 ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_putchar_fd.c\
		 ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c\
		 ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_split.c ft_itoa.c
BONUS_SOURCE = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
				ft_lstmap_bonus.c
OBJECTS =  $(SOURCE:.c=.o)
BONUS_OBJECTS = $(BONUS_SOURCE:.c=.o)
RM = rm -rf
.PHONY : all clean fclean re
all : $(NAME)

$(NAME) : $(OBJECTS)
	$(ARCHIVER) $@ $^
bonus : $(OBJECTS) $(BONUS_OBJECTS)
	$(ARCHIVER) $(NAME) $(BONUS_OBJECTS)
%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@
clean : 
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)
fclean : clean
	$(RM) $(NAME) 
re : fclean all

.SECONDARY : $(OBJECTS)
