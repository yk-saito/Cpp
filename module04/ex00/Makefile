# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 15:11:10 by ysaito            #+#    #+#              #
#    Updated: 2021/09/09 20:57:14 by ysaito           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out
SRC_DIR		= .
SRC_FILE	= main.cpp
SRC_FILE	+= Animal.cpp
SRC_FILE	+= Cat.cpp
SRC_FILE	+= Dog.cpp
SRC_FILE	+= WrongAnimal.cpp
SRC_FILE	+= WrongCat.cpp
SRCS		= $(addprefix $(SRC_DIR)/,$(SRC_FILE))
OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
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
