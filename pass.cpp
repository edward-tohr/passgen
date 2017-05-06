//#include "stdlib.h"
#include "fstream"
#include "string"
#include "iostream"
#include "time.h"
#include "stdexcept"
#include "phonetic.cpp"

static int PASS_MIN = 1;
static int PASS_MAX = 31;

int main(int argc, char* argv[]){
	int randChar = 0;
  bool phoneticOutput = true;
	std::string phoneticPass = "";
	std::fstream passText;
	passText.open("pass.txt",std::fstream::out|std::fstream::trunc);
	int numPass = 5;
  for (int i = 1; i < argc; i++) {
    if (std::string(argv[i]) == "-s" || std::string(argv[i]) == "--script-output"){
      numPass = 1;
      phoneticOutput = false;
    } else {
  	try {
      numPass = std::stoi(argv[i]);
    }
    catch (const std::invalid_argument& ia) {
      std::cerr << "Invalid argument: " << argv[1] << '\n';
    } 
    }
  }
	if (numPass < PASS_MIN){numPass = PASS_MIN;}
	if (numPass > PASS_MAX){numPass = PASS_MAX;}
	srand(time(NULL));
	for (int j = 0; j < numPass; j++){
	for (int i = 0; i < 12; i++){
		do {
		randChar = (rand()) % 93; //clamp randChar to between 33 and 126 
		randChar += 33;
		} while (randChar == 123 || randChar == 125 || randChar == 93 || randChar
    == 91 || randChar == 40 || randChar == 41 || randChar == 92); 
    //Generate a new character if it's one of (){}[] or \

		std::cout << (char)randChar;
		passText << (char)randChar;
		srand(rand() + clock());
    if (phoneticOutput){
		phoneticPass = appendChar(phoneticPass, (char)randChar);
    }
	}
	std::cout << "\n";
  if (phoneticOutput) {
	std::cout << phoneticPass << "\n\n";
	passText << "\n" << phoneticPass << "\n\n";
  }
	phoneticPass.clear();
	}
	return 0;
}
