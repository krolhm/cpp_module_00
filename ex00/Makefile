# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/03 10:57:05 by rbourgea          #+#    #+#              #
#    Updated: 2021/06/03 17:18:38 by rbourgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		megaphone

SRCS =		megaphone.cpp

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