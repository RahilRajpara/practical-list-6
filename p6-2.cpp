#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	cout<<"I am Rahil Rajpara "<<endl;
	cout<<"En_no    220130318071 "<<endl;
	cout<<"---------------------"<<endl;
	string srg;
	ifstream filestream("test.txt");
	if(filestream.is_open())
	{
		while(getline(filestream,srg))
		{
			cout<<srg<<endl;
		}
		filestream.close();
	}
	else
	{
		cout<<"File opening is fail"<<endl;
	}
	return 0;
}
