#include<iostream>
using namespace std;
class PingFenSystem
{
public:
	int m;
	int n;
    PingFenSystem(int player,int judge)
	{
		n=player;
		m=judge;
	}
	void average(double judge[])
	{
		double temp=0;
		double sum=0;
		int i,j;
     for(int i=0;i<m-1;i++)
	{
		for(int j=0;j<m-i-1;j++)
		{
		if(judge[j]<judge[j+1])
		{
			 temp=judge[j];
             judge[j]=judge[j+1];
             judge[j+1]=temp;
		}
		}
	}
		for(i=1;i<m-1;i++)
		{
			sum+=judge[i];
		}
		sum/=m-2;
	cout<<"the result is "<<sum<<endl;
	}
};
int main()
{
	int m;
	cout<<"请输入评委数:";
	cin>>m;
	cout<<endl;
	int n;
	cout<<"请输入选手数:";
	cin>>n;
	cout<<endl;
	int i,j;
    double score[100];
	for(int i=0;i<100;i++)
		score[i]=0;
	PingFenSystem  pfs1(n,m);
	for(i=1;i<n+1;i++)
    {
	cout<<"选手 "<<i<<endl;
	cout<<"输入评委的分数："<<endl;
	for(int j=0;j<m;j++)
	cin>>score[j];
	pfs1.average(score);
	}
}
