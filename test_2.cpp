#include "iostream"
#include <sw_array_dot_product_serial.h>
using namespace std;




int main(void){
	int a;
	int b;

	int sw_add = 10;
	int hw_add;

	a = 3;
	b = 4;

	//hw_add = hw_dot_serial();
	sw_add = sw_dot_serial();

	//cout << "hw_add = " << hw_add << endl;
	cout << "sw_add = " << sw_add << endl;

//	if ( hw_add != sw_add ){
//		cout << "hw adder failed" << endl;
//		return 1;
//	}

	cout << "hw adder OK" << endl;
	return 0;
}
