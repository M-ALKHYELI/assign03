
# Makefile for verification of bams.cpp

# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++11

# Source files
SRC = $(shell pwd)/../src/bams.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Executable
EXE = bams

# Compile
$(EXE): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXE)

# Clean
clean:
	rm -f $(OBJ) $(EXE)

