CC = gcc
CFLAGS = -Iinclude

SRC = src/main.c src/atm.c src/user.c
OUT = atm

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
