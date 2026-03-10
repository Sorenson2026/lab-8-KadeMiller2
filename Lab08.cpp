//Kade Miller 3/10/26 Lab08 
//This program processes a sequence of integers from 1 to 10 and outputs
//count, minimum, maximum and average of the entered values
#include <iostream>
#include <iomanip>
using namespace std;

/*This function processes a sequence of integers from 1 to 10 and outputs
the count, minimum, maximum and average of the entered values*/ 
int main()
{
	//Create variables
	int num1, num2 = 20, count = 0, min, max, sum;
	float average;
	char choice;

	//Greeting
	cout << "This program processes a sequence of integers from 1 to 10 and outputs ";
	cout << "the count, minimum, maximum and average of the entered values. " << endl;

	//Prompt user for initial number
	cout << "\nEnter an integer (0 to quit): ";
	cin >> num1;

	//create a sum to calculate average later
	sum = num1;

	//assign max and min to num1
	max = num1;
	min = num1;

	//put entire loop inside a do while loop to be able to do multiple interactions
	do
	{
		//Create loop
		if (num1 != 0)
		{
			do
			{
				//prompt user for another number 
				cout << "Enter another integer (0 to quit): ";
				cin >> num2;

				//validate user input is between 0 and 10
				while (num2 < 0 || num2 >= 10)
				{
					cout << "You entered a number outside the range of 0 and 10, re-enter a new number: ";
					cin >> num2;
				}

				//use this loop to find max and min
				if (num2 > max)
					max = num2;
				else if (num2 != 0 && num2 < min)
					min = num2;

				//add new number to previous sum
				sum += num2;

				//increment count
				count += 1;
			} while (num2 != 0);

			//calculate average
			average = static_cast<float>(sum) / count;

			//output values
			cout << endl;
			cout << "Count Min  Max  Average" << endl;
			cout << left << setw(6) << count;
			cout << setw(5) << min;
			cout << setw(5) << max;
			cout << setw(5) << setprecision(3) << average;
		}
		cout << "\n\nWould you like to run a new series of numbers? Y for yes, N for no: ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	return 0;
}