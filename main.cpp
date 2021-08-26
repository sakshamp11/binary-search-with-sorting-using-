#include <iostream>
using namespace std;
void merge(int arr[],int s,int t,int e)
{
    int n1= t-s+1  ;
    int n2= e-t;
    int A[n1];
    int B[n2];
    
    for(int i=0;i<n1;i++) {
       A[i]=arr[s+i];
       
    }
    for(int j=0;j<n2;j++)
    {
       B[j]=arr[t+1+j];
    }
    int i ,j,k;
    i=0;
    j=0;
    k=s;
    while(i<n1 && j<n2)
    {
        if(A[i]<B[j])
        {
            arr[k]=A[i];
            k++;
            i++;
        }
        else 
        {
            arr[k]=B[j];
            k++;
            j++;
        }
    }
    while(i<n1 )
    {
        arr[k]=A[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k]=B[j];
        k++;
        j++;
    }
}    
void mergesort(int arr[],int s,int e)
{
    
    if ( s< e)
    {   int t=(s+e)/2;
        mergesort(arr, s, t);
        mergesort(arr,t+1,e);
        merge(arr, s,t, e);
    }
} 
int binarysearch(int arr[],int s,int e,int x){
    while(s<e)
    {
        int t = s+ (e-s)/2;
        if(arr[t]==x){
            return t;
            
        }
        else if(arr[t]>x){
            return binarysearch(arr,s,t-1,x);
        }
        else{
            return binarysearch(arr,t+1,e,x);
        }
    }
    return -1:
}
int main()
{
    
    int arr[]={2,4,7,83,5,9};
    mergesort(arr,0,5);
    cout<<"enter the value you want to check/find \n";
    int x;
    std::cin >> x;
    int result = binarysearch(arr, 0,5, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    
    return 0;
}    
    
