CC := gcc
CFLAGS := -Wall -Wextra -g -O2
LDFLAGS :=

all: 8ball

8ball: 8ball.c
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

