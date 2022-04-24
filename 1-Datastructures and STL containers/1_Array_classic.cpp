#include<iostream>
#include<algorithm>

using namespace std;


// Array to function
void updateArray(int arr[], int i, int val)   // Array is passed by reference
{
	arr[i]=val;
}


//print
void print(int arr[], int n)  // we have to pass array size explicitly 
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

//size of array in main and in function will be different
void arraySize(int arr[])
{
	cout<<"Array size in function "<<sizeof(arr)<<endl;
	// sizeOf will return the size of pointer
}

int main()
{
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);

	cout<<"Array size in main "<<sizeof(arr)<<endl;
	arraySize(arr);

	//Actual array is updated
	updateArray(arr,1,13);


	//print
	print(arr,n);




	//sort
	sort(arr, arr+n);
	print(arr, n);
  
  return 0;
}
