#include <iostream.h>
#include <conio.h>

void bubble(int a[], int n)
{
	int temp;

	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-i-1; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	for(int q = 0; q < n; q++)
		cout<<a[q]<<endl;
}

void selection(int a[], int n)
{
	int temp;

	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			if(a[j] < a[i])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	for(int q = 0; q < n; q++)
		cout<<a[q]<<endl;
}

void insertion(int a[], int n)
{
	int temp,j;

	for (int i = 1; i < n; i++)
	{
		temp = a[i];
		j=i-1;
		while (temp < a[j] && j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}

	for(int q = 0; q < n; q++)
		cout<<a[q]<<endl;
}

void main()
{
	getch();

	int N;
	int numbers[1000];

	cout << "Enter size of the array";
	cin >> N;

	for(int i=0; i<N; i++)
		cin>>numbers[i];

	cout << endl << "Bubble Sort";
	bubble(numbers,N);
	cout << endl << "Selection Sort";
	selection(numbers,N);
	cout<<endl << "Insertion Sort";
	insertion(numbers,N);

}
