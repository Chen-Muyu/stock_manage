#include<iostream>
#include"stock10.h"

int main()
{
	{
		using std::cout;
		cout << "using constructors to creat new objects\n";
		stock stock1("Nano Smart", 12, 20.0);
		stock1.show();
		stock stock2 = stock("Boffo Object", 2, 2.0);
		stock2.show();

		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1 and stock2: \n";
		stock1.show();
		stock2.show();

		cout << "using a constructor to reset an object: \n";
		stock1 = stock("Nicky Foods", 10, 50.0);
		cout << "Revised stock1: \n";
		stock1.show();
		cout << "Done. \n";
	}
	return 0;
}