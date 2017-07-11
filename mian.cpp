#include <iostream>
#include "anikmath.h"

int main(){

	int a ,b;
	std::cout <<"values of a and b : "<< std::endl;
	std::cin >> a >> b;
	std::cout <<"Addition ="<<anikmath::add(a,b)<< std::endl;
	std::cout <<"Suubstration :"<<anikmath::subt(a,b)<< std::endl;
	std::cout <<"Multiplication  :"<<anikmath::mult(a,b)<< std::endl;
	std::cout <<"quotient value :"<<anikmath::div(a,b)<< std::endl;
	std::cout <<"factorial value is :"<<anikmath::fac(a)<<anikmath::fac(b)<< std::endl;
	
	return 0;
	
}
