SOURCE = hlpac.c
.PHONY: gcc
.PHONY: clang
.PHONY: cex
gcc: 
	gcc $(SOURCE) --std=c23 -o hlpac.exe -O2 -Wall -Wextra
clang: 
	clang $(SOURCE) --std=c23 -o hlpac.exe -O2 -Wall -Wextra
cex:
	cgacg build $(SOURCE) --std=cex26 -O2 -Wall -o hlpac.exe
