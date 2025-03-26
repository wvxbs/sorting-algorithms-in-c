CC = gcc
CFLAGS = -Wall -Wextra -I.

# Diretórios dos algoritmos de ordenação
SRC_DIRS = bubbleSort insertionSort selectionSort shellSort mergeSort

# Arquivos fonte
SRC = index.c $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.c))

# Arquivos objeto (substitui .c por .o)
OBJ = $(SRC:.c=.o)

# Nome do executável
EXEC = sorting

# Regra principal
all: $(EXEC)

# Compila o programa
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

# Regras para compilar cada .c individualmente
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza
clean:
	rm -f $(OBJ) $(EXEC)

# Regra para rodar o programa após a compilação
run: all
	./$(EXEC)
