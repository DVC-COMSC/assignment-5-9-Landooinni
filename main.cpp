
#include <iostream>
using namespace std;

int main()
{
	int prev, current;
for (size_t i = 0; i < 1;)
{
	cin>>current;
	if (current>prev && prev!=0)
	{
		cout<<endl;
		i++;
		break;
	}
	prev=current;
	cout<<prev<<",";
}

}
