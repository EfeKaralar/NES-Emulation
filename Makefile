cpu.o:cpu.c
	gcc -c -o cpu.o cpu.c


ram.o:ram.c
	gcc -c -o ram.o ram.c


bus.o:bus.c
	gcc -c -o bus.o bus.c

emulator: cpu.o ram.o bus.o
	gcc -o emulator cpu.o ram.o bus.o
