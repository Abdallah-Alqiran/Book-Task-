#include <iostream>
#include "Book and Ebook.h"

using namespace std;

int main()
{
	Book B1(765,"How to get 0", "Abdallah Alqiran", 12.3);
	Book B2(765,"How to get 0", "Abdallah", 5);
	B1.applyDiscount(0.25);
	B1.display();

	cout << "\n==============\n";

	Ebook E1(123,"How to get full mark", "Abdallah Alqiran", 25,58);
	E1.display();
	
	if (B1 > B2)
		cout << "The first book more expensive";
	else if (B2 > B1)
		cout << "The second book more expensive";
	else
		cout << "Both books are the same price";

	
	return 0;
}

