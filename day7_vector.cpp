/*Task 
Given an array,A (each entry btw 1 to 10000), of N(1 to 1000) integers, print A's elements in reverse order as a single line of space-separated numbers.

Input Format
The first line contains an integer,N (the size of our array). 
The second line contains N space-separated integers describing array A's elements.
*/

#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int t,x;
    vector<int> arr;
    vector<int>::iterator i;
    cin>>t;
    for(int j=0;j<t;j++)
    {
    	cin>>x;
        arr.push_back(x);
    } 
	for(i= arr.end()-1; i != arr.begin()-1; i--) 
    cout << *i << " "; 
   return 0;
}
