# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/24 13:34:44 by ysaito            #+#    #+#              #
#    Updated: 2021/06/24 14:06:43 by ysaito           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie
SRC_DIR		= .
SRC_FILE	= main.cpp
SRC_FILE	+= newZombie.cpp
SRC_FILE	+= randomChump.cpp
SRC_FILE	+= Zombie.cpp
SRCS		= $(addprefix $(SRC_DIR)/,$(SRC_FILE))
OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror
RM			= rm -f

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
