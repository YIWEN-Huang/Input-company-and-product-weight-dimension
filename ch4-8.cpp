#include <iostream>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;


struct William_Wingate {
	string name;
	double weight;
	double dim;
};

int main() {
	William_Wingate* ps = new William_Wingate;
	cout << "�п�J���q�W��" << endl;
	getline(cin, ps->name);
	cout << "�п�JPIZZA���q" << endl;
	cin >> ps->weight;
	while (cin.fail()) {
		cout << "�п�J�Ʀr" << endl;
		cin.clear();
		cin >> ps->weight;

	}
	cout << "�п�JPIZZA���|" << endl;
	cin >> ps->dim;
	while (cin.fail()) {
		cout << "�п�J�Ʀr" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> ps->dim;

	}

	cout << "���q�W��" << ps->name << endl;
	cout << "PIZZA���|" << ps->dim << "����" << endl;
	cout << "PIZZA���q" << ps->weight << "����" << endl;
	delete ps;






	return 0;
}
