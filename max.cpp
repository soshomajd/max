#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int x,y,z,max;
	cout<<"enter first num: "<<endl;
	cin>>x;
	cout<<"enter 2th num: "<<endl;
	cin>>y;
	cout<<"enter 3th num: "<<endl;
	cin>>z;
	max=x;
	if(max<y)max=y;
	if(max<z)max=z;
	cout<<"maximum num is: "<<max;


}

