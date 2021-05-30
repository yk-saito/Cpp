# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/24 22:39:51 by ysaito            #+#    #+#              #
#    Updated: 2021/05/30 17:11:29 by ysaito           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
SRCS		= main.cpp
			+= contact.cpp
OBJS		= $(SRCS:.c=.o)

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

#clean:
#			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
