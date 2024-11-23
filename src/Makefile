CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99

TARGET = program

SRC = main.c hash_table.c prime.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

clean_all: clean
	rm -f *~

.PHONY: all clean clean_all
