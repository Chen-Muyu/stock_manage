//stock10.h --stock class declaration with constructors,destructor added
#ifndef STOCK10_H_
#define	STOCK10_H_
#include<string>

class stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	//2 constructors
	stock();//default constructor
	stock(const std::string& co, long n = 0, double pr = 0.0);
	~stock();//noisy destructor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};

#endif // !STOCK10_H_



