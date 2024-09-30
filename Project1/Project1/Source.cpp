#include <iostream>
using namespace std;
//template <typename A1, typename A2>
//void ChangeArgs(A1& arg1, A2& arg2);


int main() {

	/*int a = 10, b = 20;
	double a1 = 10.5, b1 = 20.5;
	string a2 = "abc", b2 = "qwe";
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a1 = " << a1 << endl;
	cout << "b1 = " << b1 << endl;

	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	ChangeArgs(a, b);
	ChangeArgs(a1, b1);
	ChangeArgs(a2, b2);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a1 = " << a1 << endl;
	cout << "b1 = " << b1 << endl;

	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;*/

	//-----------------------------------------------------------------------------------------

	/*int* p = new int;
	*p = 10;
	cout << p << endl;
	cout << *p << endl;
	delete p;
	cout << p << endl;*/

	//-----------------------------------------------------------------------------------------

	/*srand(time(NULL));
	int size;
	cin >> size;
	int* p = new int[size];

	for (int i = 0; i < size; i++) {
		p[i] = rand() % 10;
		cout << p[i] << "\t";

		cout << *(p + i) << endl;

	}*/
	int a = 10;
	cout << a << endl;


	return 0;
}
// Функция щменяет местами значения передаваемых аргументов
//template <typename A1, typename A2>
//void ChangeArgs(A1& arg1, A2& arg2) {
//	A1 temp = arg1;
//	arg1 = arg2;
//	arg2 = temp;
//}