#include <iostream>
#include <string>
#include "Encomenda.hpp"

void Encomenda::print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		};