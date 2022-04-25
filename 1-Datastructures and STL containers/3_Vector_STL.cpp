#include<vector>
using namespace std;


// Empty container constructor
vector<int> first;


// Fill constructor (4 integers with value 20)
vector<int> second(4,20); 

// Range constructor
int numbers={10,20,30,40};
vector<int> third(numbers,numbers+4);    //=> [10,20,30,40]

// Copy constructor
vector<int> fourth(third);

// Another way 
vector<int> fifth={1,2,3,4,5};


vector<int> v={1,2,3,4,10};

// Other methods
v.at(i); // i denotes ith position

// Get the current size
v.size();

// Get the underlying capacity
v.capacity();

// Get the max size (available due to system or library implementations)
v.max_size();


// insert and remove
v.push_back(5);
v.pop_back();

// Clear all elements in the current vector, reduces size to zero
v.clear();

// Erases the 4th element
v.erase(v.begin()+3);

// Erase the range - first three elements
v.erase(v.begin(), v.begin()+3);

// Reserve space
v.reserve(100);   // creates a vector of size 100

//sort
sort(v.begin(), v.end());





