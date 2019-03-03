#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	if(t>=0 && t<=10000)
	{
		while(t--)
		{
			long int n, r,bit=0, nibble=0, byte=0;
			cin>>n;
			n=n-1;
			long int count= pow(2,n/26); 
			r=n%26;
	    	if(r==0 || r==1)
			{
				bit= count;
				cout<<bit<<"\t"<<nibble<<"\t"<<byte;
			}
			else if(r>=2 && r<10)
			{
				nibble=count;
				cout<<bit<<"\t"<<nibble<<"\t"<<byte;
			}
			else
			{
				byte= count;
				cout<<bit<<"\t"<<nibble<<"\t"<<byte;
			
			}
			cout<<endl;
		}
	}
	return 0;
}
