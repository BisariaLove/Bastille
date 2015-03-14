/*
 *
 * hacker_rank/Sherlock And Squares
 *
 */
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long t,a,b;
	cin>>t;
	while(t--)
	{
			cin>>a>>b;
		//	cout<<sqrt(b)<<"-"<<sqrt(a)<<endl;
			long long r=(long long)sqrt(b)-(long long)sqrt(a);
			
			if(sqrt(a)-(long)sqrt(a)==0)
				r++;
			cout<<r<<endl;
	}
	return 0;
}
