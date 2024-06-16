# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojanos <ojanos@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 15:36:34 by ojanos            #+#    #+#              #
#    Updated: 2024/06/05 17:30:35 by ojanos           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Library = libft

files =	ft_atoi\
	ft_isascii\
	ft_memcmp\
	ft_putendl_fd\
	ft_strdup\
	ft_strlen\
	ft_strtrim\
	ft_bzero\
	ft_isdigit\
	ft_memcpy\
	ft_putnbr_fd\
	ft_striteri\
	ft_strmapi\
	ft_substr\
	ft_calloc\
	ft_isprint\
	ft_memmove\
	ft_putstr_fd\
	ft_strjoin\
	ft_strncmp\
	ft_tolower\
	ft_isalnum\
	ft_itoa\
	ft_memset\
	ft_split\
	ft_strlcat\
	ft_strnstr\
	ft_toupper\
	ft_isalpha\
	ft_memchr\
	ft_putchar_fd\
	ft_strchr\
	ft_strlcpy\
	ft_strrchr\

Compiler  = gcc

CmpFlags = -Wall -Wextra -Werror

OUTN = $(Library).a


CFILES = $(files:%=%.c)

OFILES = $(files:%=%.o)

NAME = libft.a

all: $(NAME)

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar	rc $(NAME) $(OFILES)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
