#pragma once
#include "stdafx.h"

using namespace std;
class cBirthDay {
private:
	int iDay;
	int iMonth;
	int iYear;

public:
	cBirthDay();
	bool checkDay();
	bool checkMonth();
	bool checkYear();
	bool dateValidate();
	void print();
	void nhap();
	
};

