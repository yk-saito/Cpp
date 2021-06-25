# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/24 21:37:22 by ysaito            #+#    #+#              #
#    Updated: 2021/06/25 08:54:58 by ysaito           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= brain
SRC_DIR		= .
SRC_FILE	= main.cpp
SRC_FILE	+= HumanA.cpp
SRC_FILE	+= HumanB.cpp
SRC_FILE	+= Weapon.cpp
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
