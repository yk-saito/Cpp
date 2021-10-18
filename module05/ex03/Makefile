# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 18:25:50 by ysaito            #+#    #+#              #
#    Updated: 2021/09/16 10:55:32 by ysaito           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex03
SRC_DIR		= .
SRC_FILE	= main.cpp
SRC_FILE	+= Bureaucrat.cpp
SRC_FILE	+= Form.cpp
SRC_FILE	+= Intern.cpp
SRC_FILE	+= PresidentialPardonForm.cpp
SRC_FILE	+= RobotomyRequestForm.cpp
SRC_FILE	+= ShrubberyCreationForm.cpp
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
