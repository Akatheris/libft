# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlauer <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 11:05:52 by mlauer            #+#    #+#              #
#    Updated: 2017/11/17 17:59:10 by mlauer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.PHONY: all clean fclean

NAME = libft.a

CC = gcc

SRC = 	ft_lstdel\
		ft_memmove\
	 	ft_strchr\
		ft_strlen\
		ft_strstr\
		ft_lstdelone\
		ft_memset\
		ft_strclr\
		ft_strmap\
		ft_strsub\
		ft_atoi\
		ft_lstiter\
		ft_putchar\
		ft_strcmp\
		ft_strmapi\
		ft_strtrim\
		ft_bzero\
		ft_lstmap\
		ft_putchar_fd\
		ft_strcpy\
		ft_strncat\
		ft_tolower\
		ft_isalnum\
		ft_lstnew\
		ft_putendl\
		ft_strdel\
		ft_strncmp\
		ft_toupper\
		ft_isalpha\
		ft_memalloc\
		ft_putendl_fd\
		ft_strdup\
		ft_strncpy\
		ft_isascii\
		ft_memccpy\
		ft_putnbr\
		ft_strequ\
		ft_strnequ\
		ft_isdigit\
		ft_memchr\
		ft_putnbr_fd\
		ft_striter\
		ft_strnew\
		ft_isprint\
		ft_memcmp\
		ft_putstr\
		ft_striteri\
		ft_strnstr\
		ft_itoa\
		ft_memcpy\
		ft_putstr_fd\
		ft_strjoin\
		ft_strrchr\
		ft_lstadd\
		ft_memdel\
		ft_strcat\
		ft_strlcat\
		ft_strsplit\
		ft_isspace\

INCLUDE = libft.h

FLAGS = -Wall -Wextra -Werror

SRCC = $(addsuffix .c, $(SRC))

SRCO = $(addsuffix .o, $(SRC))

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRCC) -I./$(INCLUDE)
	ar rc $(NAME) $(SRCO)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
