#include <iostream>
using namespace std;
class bubble
{
	int n;
	public:
		bubble()
		{
			n = 0;
		}
		void input(int a);
		void bubblesort(int x[]);
};
void bubble::input(int a)
{
	n = a;
}
void bubble::bubblesort(int x[])
{
	for(int i = 0; i<n ; i++)
	{
		for(int j = 0; j<n-i-1 ; j++)
		{
			if(x[j]>x[j+1])
			{
				int t = x[j];
				x[j] = x[j+1];
				x[j+1] = t;
			}
		}
	}
	cout<<"Sorted list :"<<endl;
	for(int i = 0; i<n ; i++)
	{
		cout<<x[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter no. of inputs :"<<endl;
	cin>>n;
	int w[n];
	cout<<"Enter the inputs :"<<endl;
	for(int i = 0; i<n; i++)
	{
		cin>>w[i];
	}
	bubble q;
	q.input(n);
	q.bubblesort(w);
}