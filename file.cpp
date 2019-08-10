#include<bits/stdc++.h>
using namespace std;

typedef long long l1;

int main()
{
	l1,p1,d1,temp;
	cin>>p1>>d1;
	l1 ans= p1;
	while(1)
	{
		temp(p1*d1)/100;
		if(temp==0)
		   break;
		p1-=temp;
		ans+=p1;
	
	}
	cout<<ans<<'\n';
}

