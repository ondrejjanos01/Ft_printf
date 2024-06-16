# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojanos <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/16 19:56:09 by ojanos            #+#    #+#              #
#    Updated: 2024/06/16 20:10:43 by ojanos           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Library = ft_printf

files = ft_pointer_print\
	ft_printpoint\
	ft_putchar\
	ft_putchar_fd\
	ft_putnbr\
	ft_putnbr_fd\
	ft_putstr\
	ft_putstr_fd\
	ft_strlen\
	ft_unsigned\
	ft_printf\

Compiler = gcc

CmpFlags = -Wall -Wextra -Werror

OUTN = $(Library).a

CFILES = $(files:%=%.c)

OFILES = $(files:%=$.o)

NAME = ft_printf.a

all: $(NAME)

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar	rc $(NAME) $(OFILES)

clean:
	rm -f $(NAMES)
	rm -f $(OFILES)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
