all: out

out: test_2.o sw_array_dot_product_serial.o
	g++ -o out test_2.o sw_array_dot_product_serial.o

test_2.o: test_2.cpp
	g++ -c -I /$(PWD) test_2.cpp

	 
	 
	 
sw_array_dot_product_serial.o: sw_array_dot_product_serial.cpp
	g++ -c sw_array_dot_product_serial.cpp
	      
clean:
	-rm *.o out
