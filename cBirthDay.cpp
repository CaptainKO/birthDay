#include "stdafx.h"
#include "cBirthDay.h"


cBirthDay::cBirthDay(){
	iDay = 1;
	iMonth = 1;
	iYear = 1999;
}

bool cBirthDay::checkDay() {
	if (iDay >= 1 && iDay <= 31) return true;
	else return false;
}

bool cBirthDay::checkMonth() {
	if (iMonth >= 1 && iMonth <= 12) return true;
	else return false;
}

bool cBirthDay::checkYear() {
	if (iDay >= 1) return true;
	else return false;
}

bool cBirthDay::dateValidate() {
	int days;
	switch (iMonth) {
	case 1: case 3: case 5: case 7:case 8: case 10: case 12:
		days = 31;
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		break;
	case 2:
		if ((iYear % 4 == 0 && iYear % 100 != 0) || iYear % 400 == 0)
			days = 29;
		else days = 28;
		break;
	}
	if (iDay > days) {
		cout << "Fail\n";
		return false;
	}

	else
		cout << "Success";
		return true;

}

void cBirthDay::nhap() {
	
	do {
		do {
			cout << "Nhap ngay: ";
			cin >> iDay;
		} while (!checkDay());

		do {
			cout << "Nhap thang: ";
			cin >> iMonth;
		} while (!checkMonth());

		do {
			cout << "Nhap Nam: ";
			cin >> iYear;
		} while (!checkYear());
	} while (!dateValidate());

}

void cBirthDay::print() {
	printf("\n%d/%d/%d\n", iDay, iMonth, iYear);
}




