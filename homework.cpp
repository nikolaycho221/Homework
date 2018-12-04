#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
	double x1[20],y1[20],x2[20],y2[20];
	double d[20];
	int n,i,br;
	cout<<setprecision(2)<<setiosflags(ios::fixed);
	cout<<"vavedi broya na otsetchkite mejdu 6 i 20\n";
	cin>>n;
	while(n<=6||n>=20)
	{
	cout<<"vavedi broya na otsetchkite mejdu 6 i 20\n";
	cin>>n;
	}
	cout<<"vavedi broya na otsetchkite mejdu 6 i 20\n";
	
	for(i=0;i<=n-1;i++)
		{
			cout<<"\nza"<<i+1<<" otsetchka:\n";
			cout<<"x1["<<i+1<<"]=";
			cin>>x1[i];
			cout<<"y1["<<i+1<<"]=";
			cin>>y1[i];		
			cout<<"x2["<<i+1<<"]=";
			cin>>x2[i];			
			cout<<"y2["<<i+1<<"]=";
			cin>>y2[i];						
		}
	for (i=0;i<=n-1;i++)
	d[i]=sqrt(pow((x1[i]-x2[i]),2)+pow((y1[i]-y2[i]),2));
	double s,sk;
	s=0;
	for (i=0;i<=n-1;i++)
	s= s+d[i];
	sk=0;
	for(i=0;i<=n-1;i++)
	sk=sk+d[i]*d[i];
	sk = sqrt(sk/n);
	cout<<"otsetchka No"<<" x1"<<" y1"<<" x2"<<" y2";
	cout<<" daljini"<<" razpolojenie\n";
	br = 0;
	for(i=0;i<=n-1;i++)
	{
		cout<<setw(11)<<i+1;
		cout<<setw(6)<<x1[i];
		cout<<setw(6)<<y1[i];
		cout<<setw(6)<<x2[i];
		cout<<setw(6)<<y2[i];
		cout<<setw(6)<<d[i];
		
		if(x1[i]*x2[i]>0 && y1[i]*y2[i]>0)
		{
		cout<<" ne presitcha osite\n";
		br = br+1;
	}
		else 
		cout <<" presitcha osite\n";
	}

	cout<<"broyat na otsetchkite, koito sa v edin kvadrant e "<<br<<endl;
	cout<<"sumata e "<<s<<endl;
	cout<<"srednokravdratichnata stoinost e: "<<sk<<endl;
	

	return 0;
}
