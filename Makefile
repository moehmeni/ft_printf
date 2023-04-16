# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 21:05:26 by mmomeni           #+#    #+#              #
#    Updated: 2023/04/15 14:32:09 by mmomeni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= 	libftprintf.a
CFLAGS=	-Wall -Wextra -Werror
SRCS=	ft_printf.c ft_print_char.c ft_print_num.c
OBJS= 	$(SRCS:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
