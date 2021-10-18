# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/27 07:52:36 by ysaito            #+#    #+#              #
#    Updated: 2021/07/08 18:37:32 by ysaito           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= replace
SRC_DIR		= .
SRC_FILE	= main.cpp
SRC_FILE	+= File.cpp
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

test:
			@make re -s
			./$(NAME) like.txt like "don't like"
			@make fclean -s

test2:
			@make re -s
			./$(NAME) alphabet.txt aaa ZZZ
			@make fclean -s

.PHONY:		all clean fclean re test test2
