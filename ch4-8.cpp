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
	cout << "請輸入公司名稱" << endl;
	getline(cin, ps->name);
	cout << "請輸入PIZZA重量" << endl;
	cin >> ps->weight;
	while (cin.fail()) {
		cout << "請輸入數字" << endl;
		cin.clear();
		cin >> ps->weight;

	}
	cout << "請輸入PIZZA直徑" << endl;
	cin >> ps->dim;
	while (cin.fail()) {
		cout << "請輸入數字" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> ps->dim;

	}

	cout << "公司名稱" << ps->name << endl;
	cout << "PIZZA直徑" << ps->dim << "公分" << endl;
	cout << "PIZZA重量" << ps->weight << "公斤" << endl;
	delete ps;






	return 0;
}
