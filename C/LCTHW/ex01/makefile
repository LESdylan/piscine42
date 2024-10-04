# ==================================================================================== #
# VARIABLES
# These variables define the compiler, compiler flags, source, files, obj files, bin name
# ==================================================================================== #
# Change these variables as necessary.
CC = gcc                      # The C compiler to use
CFLAGS = -Wall -Wextra -g      # Compiler flags (warnings, debugging info)
LDFLAGS =                      # Linker flags (add libraries if needed)
SRC = main.c utils.c           # List of source files
OBJ = $(SRC:.c=.o)             # Object files (same as source files but with .o extension)
TARGET = example               # The name of the binary

# ==================================================================================== #
# HELPERS
# help : display available makefile targets
# confirm : A prompt for user confirmation before executing certain command
# no-dirty : Ensure the Git repository is clean (i.e, no uncommitted changes)
# ==================================================================================== #

## 🆘 help: print this help message
.PHONY: help
help:
	@echo '👇Usage:'
	@sed -n 's/^##//p' ${MAKEFILE_LIST} | column -t -s ':' | sed -e 's/^/ /'

.PHONY: confirm
confirm:
	@echo -n 'Are you sure? [y/N] ' && read ans && [ $${ans:-N} = y ]

.PHONY: no-dirty
no-dirty:
	@test -z "$(shell git status --porcelain)"


# ==================================================================================== #
# QUALITY CONTROL
# audit : Runs the code formatting (clang-format), static analysis (cppcheck), and
# memory check
# test : compiles and run the application
# test/cover : Compiles the code with coverage information using gcov
# ==================================================================================== #

## 🛂 audit: run quality control checks
.PHONY: audit
audit: test
	@clang-format -i $(SRC)           # Format source code
	@cppcheck --enable=all $(SRC)      # Static code analysis with cppcheck
	@valgrind ./$(TARGET)             # Memory analysis with Valgrind

## 🧪 test: compile and run all tests
.PHONY: test
test: $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)
	./$(TARGET)

## 📔 test/cover: compile and check coverage (simplified for C)
.PHONY: test/cover
test/cover: $(OBJ)
	$(CC) $(CFLAGS) --coverage -o $(TARGET) $(OBJ) $(LDFLAGS)
	./$(TARGET)
	gcov $(SRC)

# ==================================================================================== #
# DEVELOPMENT
# tidy : Formats the source code and removes object files.
# build : Compiles the source code to create the binary.
# run: Builds and run the application
# run/live : Watches the sources files for changes and rebuilds/reruns the program using
# `inotifywait` (a linux tool for file system monitoring). 
# ==================================================================================== #

## 🧼 tidy_up: format and clean object files
.PHONY: tidy
tidy:
	clang-format -i $(SRC)
	rm -f $(OBJ)

## 🏗️ build: build the application
.PHONY: build
build: $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)

## 📊 run: build and run the application
.PHONY: run
run: build
	./$(TARGET)

## 👓 run/live: continuously build and run the application on file changes
.PHONY: run/live
run/live:
	while true; do \
		inotifywait -e modify $(SRC); \
		$(MAKE) build; \
		./$(TARGET); \
	done


# ==================================================================================== #
# OPERATIONS
# push : pushes the changes to the remote Git repository after confirmation, audit,
# and ensuring no dirty files in the working directory
# production/deploy : Builds the project with optimization flags ( -02 ) and copies
# the binary to a server using `scp` for deployment 
# ==================================================================================== #

## ‍🌫️ push: push changes to the remote Git repository
.PHONY: push
push: confirm audit no-dirty
	git push

## 👺 production/deploy: compile for production and deploy (simplified example)
.PHONY: production/deploy
production/deploy: confirm audit no-dirty
	$(CC) $(CFLAGS) -O2 -o $(TARGET) $(SRC) $(LDFLAGS)   # Optimize for production
	scp $(TARGET) user@yourserver:/path/to/deploy        # Deploy binary to server

