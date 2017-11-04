CC := gcc
# CFLAGS := -g -Wall -Wextra

main: main.c
	gcc -Wall -o main main.c

main_spec: main_spec.c main.c
	gcc -Wall -o main_spec main_spec.c main.c

hello:
	gcc -Wall -c basic/hello/hello.c -o basic/hello/hello.o
	gcc -Wall basic/hello/hello_main.c basic/hello/hello.o -o basic/hello/hello.out
	gcc -Wall basic/hello/hello_spec.c basic/hello/hello.o -o basic/hello/spec.out

wiser:
	gcc -Wall -c study_make_engine/util/util.c -o study_make_engine/util/util.o
	gcc -Wall study_make_engine/util/util_main.c study_make_engine/util/util.o -o study_make_engine/util/util_main.out
	gcc -Wall study_make_engine/util/util_spec.c study_make_engine/util/util.o -o study_make_engine/util/util_spec.out

clean:
	$(RM) hello
