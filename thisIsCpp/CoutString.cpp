#include "pch.h"
#include <tchar.h>
#include <iostream>
#include <string>


int _tmain(int argc, _TCHAR* argv[]) {
	
	std::string strData = "Test String";

	std::cout << "Sample string" << std::endl;
	std::cout << strData << std::endl;
	
	strData = "New string";
	std::cout << strData << std::endl;

	std::cout << "저는 " << 20 << "살" << "입니다" << std::endl;

	return 0;
}