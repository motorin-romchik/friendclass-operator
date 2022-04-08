#ifndef HEADER_H
#define HEADER_H
class money
{
	int x, y;

	/*private:
		int ;*/
public:
	int s;
	//friend mon;
	money();
	money(int my_x, int my_y);
	money(const money& Z);
	money(int ou_y);

	void In();
	void Out();
	int cop();
	const money& operator=(const money& m);
	const money& operator+=(const money& o);
	//friend money operator<=(const money& g, int value);
	bool operator<=(int value);
	friend ostream& operator<< (ostream& fcout, money& f);
	friend istream& operator>> (istream& fcout, money& f);

	~money() {}
};
class mon {
	//int xmon = money.s;
public:
	//friend money;


   
};
#endif;
