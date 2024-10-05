 CC = gcc
 CFLAGS = -g -Wall -Wextra -Werror
 TARGET = file.exe
 PATH_EX= ./ex09
 SRC = $(PATH_EX)/switch.c

.PHONY: confirmation no-dirty all clean exe update
confirmation: 
	@echo -n 'are you sure? [y\N]' && read ans && [ $${ans:-N} = y ]

no-dirty:
	@if ! test -z "$(git status --porcelain)"; then \
		echo "Error : The repository is dirty. Place commit or stash your changes."; \
		exit 1; \
	fi
 
all: $(TARGET)

$(TARGET) : $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean: 
	@rm -rf $(TARGET)

exe: $(TARGET)
	@./$(TARGET) $(args)

update: confirmation no-dirty
	@git add .; git commit -m "updated"; git push
