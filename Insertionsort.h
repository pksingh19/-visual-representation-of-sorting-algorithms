#ifndef _Insertionsort_H_
#define _Insertionsort_H_

//Function to visual representation of sorting of  an array using insertion sort

void insertionSort(int arr[],int n)
{

    int key, j;

    for(int i=1;i<n;i++)
    {

        j = i-1;

        /* move element of array which is greater than
        key by one position*/
        while(j>=0&&arr[j]>arr[j+1])
        {

                /*set red color to the element of
                array that are being compared with key*/

                viewPort2(j,arr[j],arr[j+1],RED);
                delay(5);
                clearviewport();

                swap(&arr[j],&arr[j+1]);

                /*set red color to the element of after
                swaping array that are being compared with key*/

                viewPort2(j,arr[j],arr[j+1],RED);
                delay(5);

                /*now set color to those element as WHITE*/

                viewPort2(j,arr[j],arr[j+1],WHITE);

                if(j == i-1)
                {
                    /*set green color to the element
                    of array which is key element*/
                    viewPort1(j+1,arr[j+1],GREEN);
                }
                j --;
        }

    }

        viewPort1(n-1,arr[n-1],WHITE);
        for(int i = 0;i < n; i++)
    {
        viewPort1(i,arr[i],GREEN);
        delay(20);
        viewPort1(i,arr[i],WHITE);
   }
}
#endif // _Insertionsort_H_


