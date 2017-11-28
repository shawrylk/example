test: asdsad.o binhphuong.o
	gcc -o test asdsad.o binhphuong.o
	
asdsad.o: asdsad.c 
	gcc -c asdsad.c
	
binhphuong.o: binhphuong.c 
	gcc -c binhphuong.c