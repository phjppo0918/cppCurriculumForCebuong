#include "pch.h"
#include <tchar.h>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[]) {

	//��ü�� �迭 ���·� ���� �����Ѵ�
	int* arr = new int[5];
	
	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 10;
	}

	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << std::endl;
	}

	//�迭 ���·� ������ ����� �ݵ�� �迭 ���¸� ���� �����Ѵ�!
	delete[]arr;

	return 0;

}