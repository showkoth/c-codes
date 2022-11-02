#include<stdio.h> 
#include<stdlib.h>

int main()
{

    int a[3][3],i,j,m,n,detval;
    int r1,r2,r3;
    r1 = 0;
    r2 = 0;
    r3 = 0;
    detval = 0;

    printf("Enter Elements of Matrix Row wise:\n");

    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {

            scanf("%d",&a[i][j]);

        }

    }

    r1 = a[0][0] * ((a[1][1] * a[2][2]) 
    - (a[2][1] * a[1][2]));

    r2 = a[0][1] * ((a[1][0] * a[2][2]) 
    - (a[2][0] * a[1][2]));

    r3 = a[0][2] * ((a[1][0] * a[2][1]) 
    - (a[2][0] * a[1][1]));

    detval= r1 - r2 + r3;

    printf("Determinant=%d\n",detval);

    system("PAUSE");

    return 0;

}