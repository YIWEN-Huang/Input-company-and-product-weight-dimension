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
	cout << "歡迎，請輸入任何按鈕，Q/q離開" << endl;
	cin >> a;
	while (a != "q" && a != "Q") {
		cout << "請輸入公司名稱" << endl;
		cin >> ps->name;
		getline(cin, ps->name);
		cout << "請輸入PIZZA重量" << endl;
		cin >> ps->weight;
		while (cin.fail()) {
			cout << "請輸入數字" << endl;
			cin.clear();
			cin.ignore(256, '\n');
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

		cout << "請輸入任何按鈕，Q / q離開" << endl;
		cin >> a;

	}



	return 0;
}
