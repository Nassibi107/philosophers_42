# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/02 17:56:54 by ynassibi          #+#    #+#              #
#    Updated: 2024/06/02 18:11:50 by ynassibi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_create_table.c\
		philosophy/go_to_e.c  philosophy/tandp.c\
		ft_atoi.c  ft_checker.c   \
    	ft_errors.c\
		philosophy/philo_has_running.c main.c\
		ft_isnumber.c \

OBJ = ${SRC:.c=.o}
NAME = philo
CFLAGS = -Wall -Wextra -Werror

all : ${NAME}

%.o : %.c philosophers.h
	@cc ${CFLAGS} -c $< -o $@
	@echo "\033[90mCompiling $< \033[0m"

${NAME} : ${OBJ} philosophers.h
	@cc ${CFLAGS} ${OBJ} -o $@
	@echo "\033[43mLinked Successfully\033[0m"

norm :
	@norminette

clean :
	@echo "\033[34mCleaned Successfully\033[0m"
	@rm -rf ${OBJ}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : clean
