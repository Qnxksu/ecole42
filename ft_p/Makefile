# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mprevot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/01 11:18:53 by mprevot           #+#    #+#              #
#    Updated: 2017/08/10 21:38:54 by mprevot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


all:
	make -C server_src
	make -C client_src

clean:
	make -C server_src clean
	make -C client_src clean

fclean:
	make -C server_src fclean
	make -C client_src fclean


re: fclean all

.PHONY: clean fclean re all
