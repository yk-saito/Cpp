# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 17:03:02 by ysaito            #+#    #+#              #
#    Updated: 2021/10/22 17:46:08 by ysaito           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out
SRC_DIR		= .
SRC_FILE	= main.cpp
SRCS		= $(addprefix $(SRC_DIR)/,$(SRC_FILE))
OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror
RM			= rm -f

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $@ $^

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
