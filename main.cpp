#include <bits/stdc++.h>

using namespace std;

int main()

{

    int t; cin>>t;

    while(t--)

    {

        int p, q;

        cin>>p>>q;
		// if power of 2 is odd=ashish wins
		// if power of 2 is even=jeel wins

        if(p%2==0 || q%2==0)

            cout<<"Ashish"<<endl;

        else

            cout<<"Jeel"<<endl;

    }

    return 0;

}
