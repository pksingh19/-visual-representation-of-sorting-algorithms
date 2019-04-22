#include<iostream>
#include<graphics.h>
#include "ImpFunction.h"
#include "Bubblesort.h"
#include "Insertionsort.h"
#include "Mergesort.h"

using namespace std;

class Sorting
{
    private:
        int arrsize;
        int arr[1001];
        int maxval;
    public:
        //Sorting();
        Sorting( int n, int val);
        int getarrsize();
        int getmaxval();
        int *getarray();
};
Sorting::Sorting(int n, int val)
{
	arrsize = n;
	maxval = val;
	for(int i = 0; i< n; i++)
    {
        arr[i] = rand()%val+25;
    }
}

int Sorting::getarrsize()
{
	return arrsize;
}
int Sorting::getmaxval()
{
	return maxval;
}
int* Sorting::getarray()
{
	return arr;
}
//Main Function
int main()
{
    int gd=DETECT,gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");


   // Bubble sort
    Sorting Bsort(50,500);

    Printsort(Bsort.getarray(), Bsort.getarrsize());
    setviewport(0,Bsort.getmaxval()+10,200,Bsort.getmaxval()+20,0);
    outtextxy(20,0,"Bubble Sort Visualization");

    bubblesort(Bsort.getarray(), Bsort.getarrsize());
    delay(5000);
    cleardevice();

   // Insertion sort

    Sorting Isort(50,500);

    Printsort(Isort.getarray(), Isort.getarrsize());
    setviewport(0,Isort.getmaxval()+10,200,Isort.getmaxval()+20,0);
    outtextxy(20,0,"Insertion Sort Visualization");

    insertionSort(Isort.getarray(), Isort.getarrsize());
    delay(5000);
    cleardevice();

    //merge sort

    Sorting Msort(50,500);

    Printsort(Msort.getarray(), Msort.getarrsize());
    setviewport(0,Msort.getmaxval()+10,200,Msort.getmaxval()+20,0);
    outtextxy(20,0,"Merge Sort Visualization");

    mergeSort(Msort.getarray(),0, Msort.getarrsize());
    delay(5000);
    cleardevice();

    getch();
    closegraph();
    return 0;
}

