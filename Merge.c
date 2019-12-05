#include<stdio.h>

void sort(int a[],int l,int h)
{
    int mid;
    if(l<h){
        mid=(l+h)/2;
        sort(a,l,mid);
        sort(a,mid+1,h);
        merge(a,l,mid,h);
    }
    else
        return;


}
void merge(int a[],int l,int mid ,int h)
{
    int i,j,temp[50],x=l,y=mid+1,k=0;

    while(x<=mid && y<=h){
    if(a[x]<=a[y])
        temp[k++]=a[x++];
    else//if(a[y]<=a[x])
        temp[k++]=a[y++];
    }
    while(x<=mid)
        temp[k++]=a[x++];
    while(y<=h)
        temp[k++]=a[y++];

    for(i=l,j=0;i<=h;i++,j++)
        a[i]=temp[j];



}
int main()
{
    int in,n,i,a[]={2,5,13,1,4,99,6,12,3};

    n=sizeof(a)/sizeof(a[0]);
    printf("before sorting\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

    sort(a,0,n-1);

    printf("after sorting\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);



}
