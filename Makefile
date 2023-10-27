.PHONY: all clean h2i
.PRECIOUS: inc/%.i

$(shell mkdir -p inc out)

SRCS = $(notdir $(wildcard ./tests/*.c ./tests/*.h ))
INCS = $(addprefix inc/,$(addsuffix .i, $(basename $(SRCS))))
OUTS = $(addprefix out/,$(addsuffix .txt, $(basename $(SRCS))))

all: $(OUTS)

h2i: $(INCS)

clean:
	rm -rf inc obj

inc/%.i: tests/%.c Makefile h2i.py
	python3 h2i.py --tests $< > $@

inc/%.i: tests/%.h Makefile h2i.py
	python3 h2i.py --tests $< > $@

out/%.txt: inc/%.i
	./vbcc/bin/vasmm68k_mot -quiet -I ndk/Include_I -Ftest $< -o $@ -L $@.list
	@cat $@ | sed -e 's/^/\t/'
