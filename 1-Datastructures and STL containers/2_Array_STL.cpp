#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

//update array
void updateArray(array<int,6> arr, int i, int val)        // all STL containers are passed by value
{
	arr[i]=val;
}

void updateArray2(array<int,6> &arr, int i, int val)        // array is passed by reference here
{
	arr[i]=val;
}


// print array
void print(const array <int,6> &arr)    // read only function should not modify the value
{
	for(int i=0;i<arr.size();i++)
		cout<<arr[i]<<" ";
	cout<<endl;

}



int main()
{
	array<int,6> arr ={1,2,23,14,5,6};
	
	updateArray(arr, 0, 10); // array will not get updated
	print(arr);
	
	updateArray2(arr, 0, 100); // array will be updated
	

	//sort
	sort(arr.begin(), arr.end());

	print(arr);

	//Fill
	array<int,6> fives;
	fives.fill(5);              // creates an array of all 5

	print(fives);
	

	// For Each Loop
	for(int x: fives)
		cout<<x+5<<" ";
	cout<<endl;

	//Get ith element
	cout<<arr.at(5)<<endl;


	//get the size of array
	cout<<arr.size()<<endl;

	//get the element at front and back
	cout<<arr.front()<<" "<<arr.back()<<endl;

	return 0;
}
