﻿#include <iostream>
#include <ctime>

#include "BitGenApp.h"


using namespace std;
using namespace bitgen;

int main( int argc, char* argv[] )
{
	extern Args ARGS;
	try {
		ARGS.parse( argc, argv );
		BitGenApp& app = BitGenApp::instance();
		app.run();
		std::cout << ">>| Run successfully!!!" << std::endl;
	} 
	catch( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	catch( ... ) {
		std::cout << "Unexpected error occurs." << std::endl;
		exit(-1);
	}
	//system("pause");
	return 0;
}
