#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

	if (argc == 1) {
		std::cout << "Error: No arguments passed." << std::endl;
		return 1;
	} else if (argc == 2){
		std::ofstream fileName(argv[1]);
		std::cout << "Wrote to a file: " << argv[1];
		return 0;
	} else {
		std::cout << "touch.exe: Unexpected error.";
		return 1;
	}

	return 0;
}
