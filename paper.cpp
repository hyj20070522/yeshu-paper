#include<iostream>
using namespace std;
int n;
int counted();
int formula1();
int formula2();
int main()
{
	int ans1,ans2,ans3;
    while(1)
    {
		n=0;
		cout<<"������߳�n��ֵ:";
    	cin>>n;
	    ans1=counted();
    	ans2=formula1();
    	ans3=formula2();
    	cout<<"�𰸣�"<<endl<<"ö�٣�"<<ans1<<endl<<"��ʽ��"<<ans2<<endl<<"���๫ʽ��"<<ans3<<endl;
    	if(ans1==ans2&&ans1==ans3)
    	  cout<<"��ʽ��ȷ��"<<endl<<endl;
    	else
    	  cout<<"��ʽ����"<<endl<<endl;
	}
    return 0;
}

int counted()
{
    int t=n/3;
    int temp;
    for(int k;k<=t;k++)
    {
        temp+=(n-3*k+1)*(n-3*k+2)/2;
    }
    return temp;
}

int formula1()
{
    int t=n/3;
    return t*(n*n-1+3*t*t-3*n*t)/2;
}

int formula2()
{
    int t=n/3;
    int a=n%3;
    switch (a)
    {
    case 0:
        return t*(3*t*t-1)/2;
    case 1:
        return 3*t*t*(t+1)/2;
    case 2:
        return 3*t*(t+1)*(t+1)/2;
    default:
        cout<<"???"<<endl;
        break;
    }
}
