#ifndef _Mergesort_H_
#define _Mergesort_H_

//Function to visual representation of sorting of  an array using Merge sort


/* Merges two subarrays of arr[].
 First subarray is arr[l..m]
Second subarray is arr[m+1..r] */
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

     /* create temp arrays */
    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];


    i = 0; // Initial index of left subarray
    j = 0;  // Initial index of right subarray
    k = l; // Initial index of merged subarray

    /*set red color of one element of left subarray
    and one element of right subarray that are being comapared*/

    while (i < n1 && j < n2)
    {

        viewPort1(i+l, L[i],RED);
        viewPort1(j+m+1,R[j],RED);
        delay(5);

        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            viewPort1(j+m+1,R[j],WHITE);
            if(i == 0)
                viewPort1(i+l,L[i],GREEN);
             else
                viewPort1(i+l,L[i],WHITE);

            i++;
        }
        else
        {
            arr[k] = R[j];

            viewPort1(i+l,L[i],WHITE);

            if(j+m+1 == r)
                viewPort1(j+m+1,R[j],GREEN);
            else
                viewPort1(j+m+1,R[j],WHITE);


            if(j == 0)
                viewPort1(j+m+1,R[j],YELLOW);

            j++;
        }

        k++;

    }

    while (i < n1)
    {
        viewPort1(i+l,L[i],RED);
        viewPort1(j+m,R[j-1],RED);
        delay(5);

        arr[k] = L[i];

            viewPort1(j+m,R[j-1],GREEN);

            if(i == 0)
                viewPort1(i+l,L[i],GREEN);
            else
                viewPort1(i+l,L[i],WHITE);

        i++;
        k++;
    }

    while (j < n2)
    {
        viewPort1(i+l-1,L[i-1],RED);
        viewPort1(j+m+1,R[j],RED);
        delay(5);

        arr[k] = R[j];

        viewPort1(i+l-1,L[i-1],WHITE);

        if(j+m+1 == r)
            viewPort1(j+m+1,R[j],GREEN);
        else viewPort1(j+m+1,R[j],WHITE);


        if(j == 0) viewPort1(m+1,R[j],YELLOW);

        j++;
        k++;
    }
    for(int i =l; i<=r; i++)
    {
        /* print the merged subarray to white color*/
        //setviewport(i*4,0,(i*4)+3,205,0);
        viewPort1(i,205,WHITE);
        clearviewport();

        viewPort1(i,arr[i],RED);
        delay(5);

        if(i == l || i == r)
            viewPort1(i,arr[i],GREEN);
        else
            viewPort1(i,arr[i],WHITE);

    }

}


void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int m = l+(r-l)/2;


        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

       /* set mid element to yellow color
        and both end element to GREEN color*/

        viewPort1(m+1,arr[m+1],YELLOW);
        viewPort1(l,arr[l],GREEN);
        viewPort1(r,arr[r],GREEN);

        merge(arr, l, m, r);

        viewPort1(l,arr[l],WHITE);
        viewPort1(r,arr[r],WHITE);
    }
}
#endif // _Mergesort_H_

