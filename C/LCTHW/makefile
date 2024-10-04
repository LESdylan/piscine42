 CC = gcc
 CFLAGS = -g -Wall -Wextra -Werror
 TARGET = file.exe
 PATH_EX= ./ex07
 SRC = $(PATH_EX)/a.c
.PHONY: confirmation
confirmation: 
	@echo -n "are you sure? [y\N]" && read ans && [ $${ans:-N} = y]

.PHONY: no-dirty
no-dirty:
	@test -z "$(shell git status --porcelain)"
.PHONY : all 
all: $(TARGET)
$(TARGET./LCTHW/ex01/m) : $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)
.PHONY : clean
clean: 
	@rm -rf $(TARGET)
.PHONY : exe
exe: $(TARGET)
	@./$(TARGET)
.PHONY : update
update: confirmation no-dirty
	@git add .; git commit -m "updated"; git push
