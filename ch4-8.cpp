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
	string a;
	cout << "�w��A�п�J������s�AQ/q���}" << endl;
	cin >> a;
	while (a != "q" && a != "Q") {
		cout << "�п�J���q�W��" << endl;
		cin >> ps->name;
		getline(cin, ps->name);
		cout << "�п�JPIZZA���q" << endl;
		cin >> ps->weight;
		while (cin.fail()) {
			cout << "�п�J�Ʀr" << endl;
			cin.clear();
			cin.ignore(256, '\n');
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

		cout << "�п�J������s�AQ / q���}" << endl;
		cin >> a;

	}



	return 0;
}
