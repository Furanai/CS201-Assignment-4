



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



int main()
{
	int jars = 5;
	string salsa[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	int sales[jars];



	cout << "Please enter the number of jars, per flavor, of salsa that has been sold.\n";
	for (int i = 0; i < jars; i++)
	{
		int num;
		do
		{
			cout << salsa[i] << ": "; 
			cin  >> num;

			if (num < 0)
				cout << "Not possible, we've sold at least one of every jar of salsa.\n";

		} while (num < 0);
		sales[i] = num; 
	}

	
	int high, low, tot = 0;
	high = low = sales[0];

	cout << "\n     Salsa Sales Document:\n"
	     << "---------------------------\n"
	     << fixed << showpoint << setprecision(2);

	for (int i = 0; i < jars; i++)
	{
	    
		cout << salsa[i] << ": " << sales[i] << " jars" << endl;
		tot += sales[i];

		if(sales[i] > high)
		{
			high = sales[i];
		}
		else if (sales[i] < low)
		{
			low = sales[i]; 
		}
	}

	cout << "Total jars sold: " << tot << " jars" << endl;
	cout << "Best Selling products: ";

	for (int i = 0; i < jars; i++)
	{
		if (sales[i] == high)
			cout << salsa[i] << " ";
	}


	cout << endl;
	cout << "Worst Selling product:  ";

	for (int i = 0; i < jars; i++)
	{
		if (sales[i] == low)
			cout << salsa[i] << " ";
	}



	cout << endl;

	return 0;
}
