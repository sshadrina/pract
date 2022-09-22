makefile: vvod out del
vvod: func.c
	g++ func.c -o func

out: vvod 
	./func

del: out
	rm func

