
#include<stdio.h>

int main()
{
    int a[10]={5,10,15,20,25,30,35,40,45,50},n=10;
    int key;

    printf("Enter key: ");
    scanf("%d",&key);

    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(a[mid]<key)
        {
            low=mid+1;
        }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else
        {


            if(key==a[mid])
            {
                printf("found");
                break;
            }
            else
            {
                printf("Not found");
            }

        }

    }

}
