/*
Given an integer,n (2<=n<=20, print its first 10 multiples. Each multiple n*i (where 1<=i<=10) should be printed on a new line in the form: n x i = result.

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if(n>=2 && n<=20)
   {
    for(int i=1;i<=10;i++)
     {
       cout<<n<<" "<<"x"<<" "<<i<<" "<<"="<<" "<<n*i<<"\n";  
     }
	}
    return 0;
}

