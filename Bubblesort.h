#ifndef _Bubblesort_H_
#define _Bubblesort_H_

//Function to visual representation of sorting of  an array using Bubble sort

void bubblesort(int arr[], int n)
{

    for(int i = 0; i < n-1; i++)
    {

        for(int j = 0; j < n-1-i; j++)
        {

            if(arr[j]>arr[j+1])
            {
                /*set red color to the element of
                array that are being compared */
                viewPort2(j,arr[j],arr[j+1],RED);
                delay(5);


                swap(&arr[j],&arr[j+1]);
                clearviewport();

            }
            /*set Green color to the elemnt that
            are in right position*/

            viewPort2(j,arr[j],arr[j+1],RED);
            delay(5);
            clearviewport();

            /*now set color to white at final position
            for this loop*/
            viewPort2(j,arr[j],arr[j+1],WHITE);

        }

    }
    for(int i = 0;i < n; i++)
    {
        viewPort1(i,arr[i],GREEN);
        delay(20);
        viewPort1(i,arr[i],WHITE);
   }
}
#endif // _Bubblesort_H_

