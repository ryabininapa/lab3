#include <cstdlib>
#include <iostream>
#include <conio.h>
#include "../../task1/task1/func1.h"
#include "../../task2/task2/func2.h"
#include "../../task3/task3/func3.h"
#include "../../task4/task4/func4.h"
#include "../../task5/task5/func5.h"


using namespace std;

void main()
{
	string temp;
	int m;
	do
	{
		int s;
		for (s = 1; s < 7; ++s)
		{
			if (s == 6)
			{
				cout << "Exit (6)" << endl;
			}
			else
				cout << "Task " << s << endl;
		}
		cout << "Chose the task ";
		cin >> m;
		system("cls");
		switch (m)
		{
		case 1:
			int x;
			cout << "Enter the amount: ";
			cin >> x;
			cout << "\nThe answer is: " << summ(x) << endl;
			cout << "Press any button to Continue";
			cin >> temp;
			system("cls");
			continue;
		case 2:
			double eps;
			cout << "Enter the measurement error: ";
			cin >> eps;
			cout << "\nThe answer is:" << summ2(eps) << endl;
			cout << "Press any button to Continue";
			cin >> temp;
			system("cls");
			continue;
		case 3:
			int n;
			int k;
			cout << "Enter the amount of sequence terms: n = " ;
			cin >> n;
			cout << "Enter the number of excluded sequence terms: k = ";
			cin >> k;
			print(n, k);
			cout << "Press any button to Continue";
			cin >> temp;
			system("cls");
			continue;
		case 4:
			cout << "Enter eps: ";
			cin >> eps;
			cout << "\nThe answer is: " << findFirstElement(eps) << endl;
			cout << "Press any button to Continue";
			cin >> temp;
			system("cls");
			continue;
		case 5:
			cout << "Enter eps: ";
			cin >> eps;
			cout << "\nThe answer is: " << findFirstNegativeElement(eps) << endl;
			cout << "Press any button to Continue";
			cin >> temp;
			system("cls");
			continue;
		case 6:
			continue;
		default:
			cout << "Incorrect input" << endl;
			cout << "Press any button to Continue";
			cin >> temp;
			system("cls");
			continue;
		}
	} while (m != 6);
}

