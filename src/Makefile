# Compilator și opțiuni
CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99

# Numele executabilului
TARGET = program

# Fisiere sursă și obiecte
SRC = main.c hash_table.c prime.c
OBJ = $(SRC:.c=.o)

# Regula implicită
all: $(TARGET)

# Regula pentru crearea executabilului
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Regula pentru fișierele obiect
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Curățare fișiere obiect și executabil
clean:
	rm -f $(OBJ) $(TARGET)

# Regula pentru curățarea completă (inclusiv fișiere auxiliare)
clean_all: clean
	rm -f *~

# Phony targets
.PHONY: all clean clean_all
