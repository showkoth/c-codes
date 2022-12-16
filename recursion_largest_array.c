
int getMaxElement(int a[], int size)
{
    static int i = 0, max =- 9999;  // static int max=a[0] is invalid
    if(i < size)   // till the last element
    {
        if(max < a[i])
        max = a[i];

        i++;    // to check the next element in the next iteration
        getMaxElement(a);   // recursive call
    }
    return max;
}