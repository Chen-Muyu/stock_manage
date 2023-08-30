//

#include<iostream>
#include"stock10.h"

//constructors(verbose version)
stock::stock()//default constructor
{
	std::cout << "default constructor called. " << std::endl;
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

stock::stock(const std::string& co, long n, double pr)
{
	std::cout << "constuctor using " << co << " called\n";
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be nagative! " << company << "shares set to 0. \n";
		shares = 0;
	}
	else
	{
		shares = n;
		share_val = pr;
		set_tot();
	}
}

//class destructor
stock::~stock()
{
	std::cout << "Bye " << company << " ! \n";
}

//other methods
void stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be nagative! Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
 
void stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		std::cout << "Number of shares sold can't be nagative! Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		std::cout << "You can't sell more than you have ! Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void stock::update(double price)
{
	share_val = price;
	set_tot();
}

void stock::show()
{
	using std::cout;
	using std::ios_base;
	//set format to #.###
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout << "Company: " << company << "\n";
	cout << "shares: " << shares << "\n";
	cout << "shares price: $" << share_val << "\n";

	//set format to #.##
	cout.precision(2);
	cout << "Total worth:¡¡$" << total_val << "\n";

	//restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}



