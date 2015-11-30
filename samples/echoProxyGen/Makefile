##
## Makefile for ProxyGen
##


NAME	=	pg_server

SRC	= 	EchoHandler.cpp\
		EchoServer.cpp

OBJ		=	$(SRC:.cpp=.o)

INCLUDE_PATH	=	-I/home/olouso/proxygen/

LIB_PATH	=	-lproxygenhttpserver -lfolly -lglog -lgflags -pthread 	

CFLAGS	=	-std=c++11 $(INCLUDE_PATH) $(LIB_PATH)

CC		=	g++

RM		=	rm -f
ECHO	=	echo -e

%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
	@$(ECHO) '\033[0;33m> Compiled\033[0m'

clean	:
	$(RM) $(OBJ)
	@$(ECHO) '\033[0;33m> Directory cleaned\033[0m'

fclean	: clean
	$(RM) $(NAME)
	@$(ECHO) '\033[0;33m> Remove executable\033[0m'

re	: fclean all
