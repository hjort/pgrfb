CC = gcc
CFLAGS = -Wall -g

all: valcpf

librfb.so: librfb.c rfb.h
	$(CC) $(CFLAGS) librfb.c -shared -o librfb.so

valcpf.o: valcpf.c librfb.so
	$(CC) $(CFLAGS) valcpf.c -c

valcpf: valcpf.o
	$(CC) $(CFLAGS) valcpf.o -L. -lrfb -o valcpf

clean:
	rm -f *.o *.so valcpf

install: librfb.so
	cp librfb.so /usr/lib; cp rfb.h /usr/include

test: valcpf
	LD_LIBRARY_PATH=. ./valcpf 87676876674

debug:
	gdb --args valcpf 87676876674
