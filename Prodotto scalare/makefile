# Compilatore
CC = gcc

# Opzioni di compilazione
CFLAGS = -Wall -Wextra -g

# File sorgenti e oggetti
SRC = main.c vettori.c
OBJ = $(SRC:.c=.o)
EXEC = programma

# Regola principale: compila l'eseguibile
all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

# Regola per compilare i file .c in .o
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

# Pulizia dei file compilati
clean:
	rm -f $(OBJ) $(EXEC)
