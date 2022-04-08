#include<iostream>
#include<windows.h>
#include<fstream>
using namespace std;
#include"Header.h"
void fun() {
	int n, res = 0;
	cout << "Динамический массив" << endl;
	cout << "Введите количество элементов статического массива: ";
	cin >> n;
	res = 0;
	money* D = new money[n];
	for (int i = 0; i < n; i++)
	{
		D[i].In();
		D[i].Out();
		res = D[i].cop();
		cout << "\nВсего копеек: " << res;
	}
	delete[]D;
}
void func() {
	int a,b;
	fstream file;
	file.open("1.txt");
	if (!file.is_open()) {
		cout << "Ошибка открытия файла! " << endl;
		exit(0);
	}
	cout << "Введите рубли и копейки одного обьекта" << endl;
	cout << "р:";
	cin >> a;
	cout << "к:";
	cin >> b;
	if (b > 99) {
		a = a + (b / 100);
		b %= 100;

	}
	money obj(a, b);
	file << obj;
}
void funk() {
	fstream filer;
	filer.open("1.txt");
	int r, k;
	cout << "Чтение из файла. . .";
	filer >> r;
	filer >> k;
	cout << "|" << r << "." << k << "|";
	filer.close();
}
int main(void) {
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int size = 3;
	cout << "HI, программа для работы с валютой готова...." << endl;
	int res;
	int copeek;
	money l; //конструктр по умолчанию
	money Z(34, 56);//конструктор с параметром
	money rt(Z); //конструктор копии
	//cout << endl;
	cout << "Сколько копеек: ";
	cin >> copeek;
	money var_15(copeek);// конструктор по заданию
	

	//-------------------------------------
	//перегрузка
	cout << endl << "ДО работы перегрузки символа";
	money first(23, 45);
	money second(67, 98);
	//first.operator=(second);
	first = second;
	cout << "После работы перегрузки символа";
	first.Out();
	second.Out();
	//-_________________
	cout << endl << "ДО работы перегрузки символа";
	money first_2(45, 23);
	money second_2(67, 98);
	//first.operator+=(second);
	first_2 += second_2;
	cout << "После работы перегрузки символа";
	first_2.Out();
	second_2.Out();
	cout << endl;
	money first_3(45, 23);
	int val = 0;
	cout << " введите число для сравнения с обьктом";
	cin >> val;
	if (first_3 <= val)
		cout << "True";
	else
		cout << "False";


	//------------------------------
	money A, * B = new money;
	//delete[]B; так вызываем диструктор он вызывается сам впринципе
	money C[size];

	money fobj;
	for (;;) {
		//system("cls");
		cout << endl;
		cout << "Меню." << endl;
		cout << "1.одиночный статический элемент" << endl;
		cout << "2.одиночный динамический элемент" << endl;
		cout << "3.статический массив из " << size << " элементов" << endl;
		cout << "4.динамический массив" << endl;
		cout << "5.конструктр по умолчанию" << endl;
		cout << "6.конструктор с параметром" << endl;
		cout << "7.конструктор копии" << endl;
		cout << "8.конструктор по созданию нового обьекта" << endl;
		cout << "9.перегрузка,ввод через дружественную fun| console |" << endl;
		cout << "10.перегрузка,вsвод через дружественную fun| console |" << endl;
		cout << "11.занос в файл" << endl;
		cout << "12.чтение из файла" << endl;
		cout << "13.Выход из программы" << endl;

		int choose = 0;
		cout << "Выбор: "; cin >> choose;
		switch (choose) {
		case 1:
			res = 0;
			cout << "\nОдиночный статический элемент";
			A.In();
			A.Out();
			res = A.cop();
			cout << "\nВсего копеек: " << res;
			break;
		case 2:
			res = 0;
			cout << "\nОдиночный динамический элемент";
			B->In();
			B->Out();
			res = B->cop();
			cout << "\nВсего копеек: " << res;
			break;
		case 3:
			cout << "\nСтатический массив из " << size << " элементов";
			res = 0;
			for (int i = 0; i < size; i++)
			{
				C[i].In();
				C[i].Out();
				res = C[i].cop();
				cout << "\nВсего копеек: " << res;

			}
			break;
		case 4:
			fun();
			break;

		case 5:
			cout << "Конструктор по умолчанию с рандомом" << endl;
			l.Out();
			break;
		case 6:
			cout << "Конструктор с параметром" << endl;
			Z.Out();
			break;
		case 7:
			cout << "Конструктор копии" << endl;
			rt.Out();
			break;
		case 8:
			cout << "8.конструктор по созданию нового обьекта" << endl;
			var_15.Out();
			break;

		case 9:
			cout << "Введите сначала рубли, потом копейки"<<endl;
			cin >> fobj;
			break;
			//чтоб проскальзывал на следующий case
		case 10:
			cout << "Вывод введенного обекта с помощью перегрузки символа friend fun"<<endl;
			cout << fobj;
			break;

		case 11:
			func();
			break;

		case 12:
			funk();
			break;
		case 13:
			return 0;
			break;
		}
		
	}
	



}