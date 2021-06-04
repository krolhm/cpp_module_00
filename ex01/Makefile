# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/03 17:08:17 by rbourgea          #+#    #+#              #
#    Updated: 2021/06/03 20:09:32 by rbourgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		phonebook

SRCS =		main.cpp \
			phonebook.cpp

OBJS =		$(SRCS:%.cpp=%.o)

CFLAGS =	-Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			clang++ $(CFLAGS) -o $(NAME) $(OBJS)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all