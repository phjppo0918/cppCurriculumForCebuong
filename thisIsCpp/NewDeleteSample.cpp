#include "pch.h"
#include <tchar.h>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[]) {
	//�ν��Ͻ��� �������� �����ϴ� ���
	int* pData = new int;

	//�ʱⰪ�� ����ϴ� ���
	int* pNewData = new int(10);
	
	*pData = 5;
	
	std::cout << *pData << std::endl;
	std::cout << *pNewData << std::endl;

	delete pData;
	delete pNewData;



	return 0;
}