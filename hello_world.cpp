#include <iostream>
void printer_func(char* array){
	std::cout<< array;
}

int main(){
	char array[] = "Hello World";
	printer_func(array);
	return 0;
}
