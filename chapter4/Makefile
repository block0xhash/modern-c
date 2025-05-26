CC=gcc
CFLAGS=-Wall -g -std=c23

bin/%: %.c
	@mkdir -p bin
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f *.exe *.o bin/*.*

.PHONY: clean