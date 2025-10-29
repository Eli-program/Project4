#include <iostream>
using namespace std;


int main()
{
	int minWeight = >=0;
	int maxWeight = 20;
	cout << "Enter package weight: ";
	int packageWeight;
	cin >> packageWeight;

	int distance;
	int maxDistance = 3000;
	int minDistance = 10;
	cout << "Enter distance to be shipped: ";
	cin >> distance;

	int rate;

	if (packageWeight > maxWeight || packageWeight <= minWeight)
	{
		cout << "Invalid package weight." << endl;
	}
	else if (distance > maxDistance || distance < minDistance)
	{
		cout << "Invalid distance." << endl;
	}
	else
	{
		if (packageWeight <= 2)
		{
			rate = 1.10;
		}
		else if (packageWeight <= 6)
		{
			rate = 2.20;
		}
		else if (packageWeight <= 10)
		{
			rate = 3.70;
		}
		else
		{
			rate = 4.80;
		}
		double totalCost = rate * (distance / 500.0);
		cout << "Total shipping cost: $" << totalCost << endl;
	}

}