#include<iostream>
#define MAX 50
using namespace std;
int binarysearch(int arr[],int n,int item)
{
	int low=0,up=n-1,mid;
	while(low<=up)
	{
		mid=(low+up)/2;
		if(item>arr[mid])
			low=mid+1;
		else if(item<arr[mid])
			up=mid-1;
			else 
			return mid;	
	}
	return -1;
}
int main()
{
	int arr[MAX],n,i,item;
	cout<<"Enter the number of elements:\n";
	cin>>n;
	cout<<"Enter the elements in sorted order:\n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Entered elements are:\n";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl<<"Enter the item to be serached:\n";
	cin>>item;
	int index=binarysearch(arr,n,item);
	
	if(index==-1)
		cout<<"Elements is not in the array\n";
	else
		cout<<"Elment is fount at posision "<<index+1;	
	return(0);
}
