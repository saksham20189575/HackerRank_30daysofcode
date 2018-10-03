/*Task 
Given an array,A (each entry btw 1 to 10000), of N(1 to 1000) integers, print A's elements in reverse order as a single line of space-separated numbers.

Input Format
The first line contains an integer,N (the size of our array). 
The second line contains N space-separated integers describing array A's elements.
*/

#include <iostream>
using namespace std;
int main()
{
    int t,arr[1000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for(int j=t-1;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }
   return 0;
}
