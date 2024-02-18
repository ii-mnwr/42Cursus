
SRC = client.c server.c minitalk_utils.c

CLIENT_NAME = client
SERVER_NAME = server

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

OBJ = $(SRC:.c=.o)

all: $(CLIENT_NAME) $(SERVER_NAME)


$(CLIENT_NAME): client.o minitalk_utils.o
	$(CC) $(CFLAGS) $^ -o $@

$(SERVER_NAME): server.o minitalk_utils.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(CLIENT_NAME) $(SERVER_NAME)

re: fclean all
