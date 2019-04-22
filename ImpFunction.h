#ifndef _ImpFunction_H_
#define _ImpFunction_H_

//function to print one element of array

void viewPort1(int start,int val, int color)
{
    int k = start*10;
    setviewport(k,0,k+8,505,0);
    setfillstyle(SOLID_FILL,color);
    bar(0,505,8,505-val);

}

//function to print two consicutive element of array

void viewPort2(int start,int val1, int val2, int color)
{
    int k = start*10;
    setviewport(k,0,k+20,505,0);
    setfillstyle(SOLID_FILL,color);
    bar(0,505,8,505-val1);
    bar(10,505,18,505-val2);
}

//function to print all element of array
// with white color

void Printsort(int arr[], int n)
{
    for(int i = 0;i < n; i++)
    {
        viewPort1(i,arr[i],WHITE);
   }
}

//function to swaping the two element of array
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
#endif // _ImpFunction_H_

