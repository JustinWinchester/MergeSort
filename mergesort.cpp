#include <iostream>
#include <cmath> 
#include <cstdlib> 

using namespace std; 

const int INPUT_SIZE = 100; 

void print(int *input)
{
	cout<<input[i]<<" " ;
	cout<<endl;
}

void merge(int *input, int p, int r) 
{
	int mid = floor((p+r) / 2) ;
	int i1 = 0;
	int i2 = p; 
	int i3 = mid + 1;

//temp array
int temp[r-p+1];

//Merge the two arrays in sorted form 
while(i2 <= mid && i3 <= r)
if(input[i2] < input[i3])
	temp [i1++] = input[i2++];
	else
	temp[i1++] = input[i3++];
//Merge the remaining elements in the left array
while(i2<= mid)
	temp[i1++] = input[i2++];
//Merge the remaining elements in the right array
while(i3 <= r)
