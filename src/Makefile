# object files
OBJS = history.o tokenizer.o
OBJS_MAIN = $(OBJS) ui.o
OBJS_TEST = $(OBJS) tester.o

# -g for debug, -03 optimization
CFLAGS=-g -O3

# File dependencies
tokenizer.h: tokenizer.o ui.o
history.h: history.o ui.o

tokenizer: $(OBJS_MAIN)
	cc -o tokenizer $(CFLAGS) $(OBJS_MAIN)

tokenizer_test: $(OBJS_TEST)
	cc -o tokenizer_test $(CFLAGS) $(OBJS_TEST)

all: tokenizer

clean:
	rm -f *.o *.c~ *.h~ *~ *.c# *.h# src

run: tokenizer
	./tokenizer

test: tokenizer_test
	./tokenizer_test
