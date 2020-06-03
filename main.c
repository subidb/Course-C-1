//Subid Basaula


#include <time.h>
#include <stdio.h>

using namespace std;


void asc_Selectionsort (int* a, int n);
void des_Selectionsort(int* a, int n);

int main ()
{

        srand((unsigned)time(0));//makes sure the random elements are different every time

        cout <<"Enter the number of inputs(Size of array)" << endl;
		int n;

		cin >> n;
		cout <<"Array size = " << n << endl;

		int *arr = new int (sizeof(int)*n);

		for (int i=0;i<n;i++)
		{

			int number = (rand()%500);// generating random numbers for the array(number values upto 500
			arr[i] = number;
		}
		cout << "initial array:" << endl;
		for (int i=0;i<n;i++)
		{
			std::cout << arr[i] << " ";

		}
		cout << "\n\n";

		clock_t t1 = clock();
		asc_Selectionsort(arr,n);
		clock_t t2 = clock();
		std::cout << "Sorted array in ascending order:" << std::endl;
        for (int i=0;i<n;i++)
        {
            cout << arr[i] << " ";

        }

        printf("\n\nTime taken in normal(average) case : %fs\n\n", (double)(t2 - t1)/CLOCKS_PER_SEC);
        //^sorting the original order

        clock_t t3 = clock();
		asc_Selectionsort(arr,n);
		//at this point the array is already sorted so, it should take the least amount
		//of time
		clock_t t4 = clock();

		std::cout << "(Already sorted array) Sorted again in ascending order:" << std::endl;
        for (int i=0;i<n;i++)
        {
            cout << arr[i] << " ";

        }

        printf("\n\nTime taken in best case : %fs\n\n", (double)(t4 - t3)/CLOCKS_PER_SEC);

        clock_t t5 = clock();
		des_Selectionsort(arr,n);
		//the sorted array(which is in ascending order is
        //passed into the descending array so since it has to reverse the whole order,
        //it should take the most time

		clock_t t6 = clock();
		std::cout << "Sorted array in descending order:" << std::endl;
        for (int i=0;i<n;i++)
        {
            cout << arr[i] << " ";

        }

        printf("\n\nTime taken in worst case : %fs\n\n", (double)((t6- t5)/(CLOCKS_PER_SEC)));


		delete[] arr;


}

void asc_Selectionsort (int* a, int n)

{
	int min;
	for (int i=0;i<n-1;i++)
	{
	    min  = i;
		for(int j=i+1;j<n;j++)
		{
			if (a[j]< a[min])
			{
				min = j;
			}

		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}


}

void des_Selectionsort(int* a, int n)

{

	int min;
	for (int i=0;i<n-1;i++)
	{
	    min  = i;
		for(int j=i+1;j<n;j++)
		{
			if (a[j]> a[min])
			{
				min = j;
			}

		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}




}

