#include<iostream>
#include<cstdlib>
#include<ctime>
int main()
{
	int x= time(0);
	srand(x);
	std::cout<<"you rolled...  "<<rand()%6+1<<'\n';
}
