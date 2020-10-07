
.PHONY: all
all: libmathshim.so

libmathshim.so: math_shim.o
	gcc -shared -o libmathshim.so math_shim.o

math_shim.o: math_shim.c
	gcc -c -fpic math_shim.c

.PHONY: install
install: all
	cp libmathshim.so $$FLANG_INSTALL/lib
