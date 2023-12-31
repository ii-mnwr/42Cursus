



# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mthodi <mthodi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 18:53:54 by mthodi            #+#    #+#              #
#    Updated: 2023/11/25 09:10:53 by mthodi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f
SRC =  ft_isalpha.c ft_memcpy.c ft_memset.c ft_tolower.c ft_memset.c\
	ft_strlcat.c ft_bzero.c ft_isdigit.c ft_memset.c ft_strlen.c\
	ft_isalnum.c ft_isprint.c ft_strrchr.c ft_strchr.c ft_isalpha.c\
	ft_memcpy.c ft_tolower.c ft_isascii.c ft_memmove.c ft_strlcpy.c\
	ft_toupper.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	ft_calloc.c ft_atoi.c ft_strdup.c ft_putchar_fd.c ft_itoa.c\
	ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c ft_striteri.c\
	ft_strmapi.c ft_strtrim.c ft_strjoin.c ft_split.c 
OBJ = $(SRC:.c=.o)
SRC_BONUS = ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c\
	ft_lstadd_back.c ft_lstadd_front.c ft_lstiter.c ft_lstmap.c
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ_BONUS)
	@$(AR) $(NAME) $(OBJ_BONUS)
clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	@$(RM) *.out
	@$(RM) $(NAME) $(bonus)

re: fclean all

.PHONY = all bonus clean fclean re
