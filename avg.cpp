#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
using namespace std;
//this program calculates the standard deviation reading data from the file
int main(){
	//initialize the variable in array form to store multiple value
	int n;//number of observation in the file
	cout<<"enter the number of observation in the file:"<<endl;
	cin>>n;
	double aray[n],average;
	int i;
	double a=0.0,s=0.0,standard_deviation;
ifstream myfile;
myfile.open("avg.txt");
if(myfile.fail()){
	cout<<"the file could not be opened"<<endl;
	exit(1);
}
while(!myfile.eof())
{
	for(i=0;i<n;i++){
	myfile>>aray[i];//reading all the data into the array n
	a=(a+aray[i]);// calculating the sum of the numbers
	}
}
//display the numbers in file to users.
	cout<<"Data from file are:"<<endl;

	for(i=0;i<n;i++)
{
	cout<<aray[i]<<"\n";
}
	//calculate the average
average=a/n;
cout<<"\nAverage= "<<average;
myfile.close();

//open the file to calculate the standard deviation
myfile.open("avg.txt");
		if(myfile.fail()){
			cout<<"the file could not be opened"<<endl;
			exit(1);
		}



while(!myfile.eof())
{
	for(i=1;i<9;i++){
	myfile>>aray[i];
	s= s+pow((aray[i]-average),2)/n;//calculate the sum of the square of the
	//difference between numbers and the average
	}
}
//calculate the standard deviation
standard_deviation=sqrt(s);

cout<<"\nStandard deviation= "<<standard_deviation<<" "<<endl;
		myfile.close();
		return 0;
}
