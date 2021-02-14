#include <iostream>
using namespace std;
//#define CHESS
//#define FIRST_CORNER (char)218
//#define SECOND_CORNER (char)191
//#define THIRD_CORNER (char)192
//#define FOURTH_CORNER (char)217
//#define HORIZ_LINE (char)196<<(char)196
//#define VERT_LINE (char)179
//#define SQUARE_WHITE (char)219<<(char)219
//#define HARDCHESS

//#define ARRAY_1
//#define ARRAY_2
//#define ARRAY_3
//#define ARRAY_4
//#define ARRAY_5
//#define ARRAY_6
//#define ARRAY_7
//#define ARRAY_8

void main()
{

#ifdef CHESS

	int n;

	cout << "Enter size of chessboard: "; cin >> n;
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << FIRST_CORNER;
			else if (i == 0 && j == n) cout << SECOND_CORNER;
			else if (i == n && j == 0) cout << THIRD_CORNER;
			else if (i == n && j == n) cout << FOURTH_CORNER;
			else if (i == 0 || i == n) cout << HORIZ_LINE;
			else if (j == 0 || j == n) cout << VERT_LINE;
			else if ((i + j) % 2 == 0) cout << SQUARE_WHITE;
			else cout << "  ";
		}
		cout << endl;


	}
#endif // CHESS

#ifdef HARDCHESS

	int n;

	cout << "Enter size of chessboard: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if ((i + k) % 2 == 0)cout << SQUARE_WHITE;
					else cout << "  ";
				}
			}
			cout << endl;
		}
	}



#endif // HARDCHESS

#ifdef ARRAY_1

	const int n = 5;
	int array[n];

#endif // ARRAY_1

#ifdef ARRAY_2

	const int n = 5;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter elements of array: ";

		cin >> array[i];
	}

#endif // ARRAY_2

#ifdef ARRAY_3

	const int n = 5;
	int array[n] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < n; i++)
	{
		cout << i << " = " << array[i] << "  " << endl;
	}

#endif // ARRAY_3

#ifdef ARRAY_4
	const int n = 5;
	int array[n] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < n; i++)
	{
		cout << i << " = " << array[4 - i] << "  " << endl;
	}
#endif // ARRAY_4

#ifdef ARRAY_5

	const int n = 5;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter elements of array: ";

		cin >> array[i];
	}
	cout << endl;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	cout << "Amount of array is " << sum << endl;
#endif // ARRAY_5

#ifdef ARRAY_6

	const int n = 5;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter elements of array: ";

		cin >> array[i];
	}
	cout << endl;
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	cout << "Average of array is " << sum / n << endl;
#endif // ARRAY_6

#ifdef ARRAY_7

	const int n = 5;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter elements of array: ";

		cin >> array[i];
	}
	cout << endl;

	int min = array[0];

	for (int i = 1; i < n; i++)
	{
		if (min > array[i]) min = array[i];
	}
	cout << "Minimum value of array is: " << min << endl;

#endif // ARRAY_7

#ifdef ARRAY_8

	const int n = 5;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter elements of array: ";

		cin >> array[i];
	}
	cout << endl;

	int max = array[0];

	for (int i = 1; i < n; i++)
	{
		if (max < array[i]) max = array[i];
	}
	cout << "Maximum value of array is: " << max << endl;

#endif // ARRAY_8


}

