#include<iostream>
using namespace std;
#include"Header.h";

money::money() /* : x(12), y(9) �������������*/ {
	x = rand() % 100001; // �� ���� �� 100000
	y = rand() % 100; // �� ���� �� 99


}
money::money(int my_x, int my_y) {
	cout << endl;
	x = my_x;
	y = my_y;

	if (y > 99) {
		x += (y / 100);
		y %= 100;

	}
	
};
money::money(const money& Z) {
	cout << endl;
	x = Z.x; y = Z.y;

};
money::money(int ou_y) {
	x = ou_y / 100;
	y = ou_y % 100;


};
//money::~money() {};

void money::In(void)
{
	cout << "\n������� ������� ������ � ������:";
	cout << "\n���:"; cin >> x;
	cout << "���:";
	cin >> y;
	if (y > 99) {
		cout << "��������� ���������� ������ - ��������";
		cout << endl << "����������� ������ . . . . .";
		//exit(0);
	}


}
void money::Out(void)
{	//��������� ������� ���� ������ ������ 99 �� ������� ����� ����� � �����!!!!
	if (y > 99) {
		x += (y / 100);
		y %= 100;

	}
	cout << "|" << x << "." << y << "|";
}
int money::cop()
{
	int c = 0;
	c = ((x * 100) + y);
	return c;

}
const money& money::operator=(const money& m)
{
	if (this == &m)
		return *this;
	x = m.x;
	y = m.y;
	return *this;
}
const money& money::operator+=(const money& o)
{

	x += o.x;
	y += o.y;
	return *this;
}

bool money::operator<=(int value) {
	int c;
	c = ((x * 100)) + y; // �������� � ������� ��� �������� ��������� � ����� ������ ������
	if (c <= value) {

		return true;
	}
	else
		return false;
}
istream& operator>> (istream& fcin, money& f) {
	fcin >> f.x;
	fcin >> f.y;

	return fcin;
}

ostream& operator<< (ostream& fcout, money& f) {
	if (f.y > 99) {
		f.x += (f.y / 100);
		f.y %= 100;

	}
	
	fcout << f.x << " " << f.y << endl;
	return fcout;
}
