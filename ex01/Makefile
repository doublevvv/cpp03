# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 13:42:57 by vlaggoun          #+#    #+#              #
#    Updated: 2025/04/04 14:26:50 by vlaggoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

SOURCES = ClapTrap.cpp main.cpp ScavTrap.cpp

SRCS = $(SOURCES)

#SRCS = $(addprefix $(OBJ_DIR)/, $(SOURCES))

OBJ_DIR = objs

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
#CFLAGS = -g3

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
		@mkdir -p $(@D)
		$(CXX) $(CXXFLAGS) -cpp $< -o $@

DEP =	$(SRCS:.cpp=.d)

clean:
	$(RM) $(OBJS) $(DEP)

fclean: clean
	$(RM) $(NAME) $(OBJ_DIR)

re: fclean
	make all

.PHONY: all clean fclean re

-include $(DEP)
