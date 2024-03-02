myreader: main.o reader.o
	gcc main.o reader.o -o myreader

main.o: main.c
	gcc -c main.c -o main.o

reader.o: reader.c
	gcc -c reader.c -o reader.o

clean:
	@echo "Do you confirm the cleaning process? (y/n)"
	@read -r response; \
	if [ $$response = "y" ]; then \
		rm -rf *.o myreader; \
		echo "Cleaning completed."; \
	else \
		echo "Cleaning canceled."; \
	fi

