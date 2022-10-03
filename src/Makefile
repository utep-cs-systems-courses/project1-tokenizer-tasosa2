# object files
OBJS = ui.o

# -g for debug, -03 optimization
CFLAGS=-g -O3

all: ui

ui: $(OBJS)
	cc -o ui $(CFLAGS) $(OBJS)

clean:
	rm -f *.o *.c~ *.h~ *~ *.c# *.h# src

run: ui
	./ui
