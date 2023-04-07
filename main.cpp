#include <iostream>
#include <conio.h>

using namespace std;

class calcu {
public:
	double add(int x, int y) {
		return x + y;
	}
	double divide(int x, int y) {
		return x / y;
	}
	double multiply(int x, int y) {
		return x * y;
	}
	double minus(int x, int y) {
		return x - y;
	}
};

int main() {
	calcu obj;
	double num1;
	double num2;
	int choose;
	cout << "Calculator : " << endl;
	cout << "1_+ or 2_- or 3_* or 4_/ : ";
	cin >> choose;
	switch(choose) {
		case 1:
			cout << "number 1 : ";
			cin >> num1;
			cout << "number 2 : ";
			cin >> num2;
			cout << obj.add(num1, num2) << endl;
			break;
		case 2:
			cout << "number 1 : ";
			cin >> num1;
			cout << "number 2 : ";
			cin >> num2;
			cout << obj.minus(num1, num2) << endl;
			break;
		case 3:
			cout << "number 1 : ";
			cin >> num1;
			cout << "number 2 : ";
			cin >> num2;
			cout << obj.divide(num1, num2) << endl;
			break;
		case 4:
			cout << "number 1 : ";
			cin >> num1;
			cout << "number 2 : ";
			cin >> num2;
			cout << obj.divide(num1, num2) << endl;
			break;
		default:
			break;
	}
	getch();
	return 0;
}