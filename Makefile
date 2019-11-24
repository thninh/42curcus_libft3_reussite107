# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thninh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 20:34:44 by thninh            #+#    #+#              #
#    Updated: 2019/11/24 11:28:02 by thninh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./libft.h

SRC = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c \
	  ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_itoa.c ./ft_memccpy.c \
	  ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c \
	  ./ft_putchar_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_putstr_fd.c \
	  ./ft_split.c ./ft_strchr.c ./ft_strdup.c ./ft_strjoin.c ./ft_strlcat.c \
	  ./ft_strlcpy.c ./ft_strlen.c ./ft_strmapi.c ./ft_strncmp.c \
	  ./ft_strnstr.c ./ft_strrchr.c ./ft_strtrim.c ./ft_substr.c \
	  ./ft_tolower.c ./ft_toupper.c ./ft_free_str.c

SRC_BONUS = ./ft_lstnew_bonus.c ./ft_lstadd_front_bonus.c ./ft_lstsize_bonus.c \
			./ft_lstlast_bonus.c ./ft_lstadd_back_bonus.c \
			./ft_lstdelone_bonus.c ./ft_lstclear_bonus.c \
			./ft_lstiter_bonus.c ./ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
OBJ_B = $(SRC_BONUS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC) -I $(HEADER)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\\033[1;32m [ ✔︎ ] Created libft\\033[0;39m"

bonus:
	@$(CC) $(CFLAGS) -c $(SRC_BONUS) -I $(HEADER)
	@ar rc $(NAME) $(OBJ_B)
	@ranlib $(NAME)
	@echo "\\033[1;32m [ ✔︎ ] Created bonus\\033[0;39m "

%.o:%.c
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@/bin/rm -rf $(OBJ)
	@/bin/rm -rf $(OBJ_B)
	@echo "\\033[1;34m [ ✔︎ ] Deleted objects.\\033[0;39m "

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "\\033[1;34m [ ✔︎ ] Deleted libft.a\\033[0;39m "

re : fclean all

.PHONY: clean fclean
