#include <iostream>
#include <math.h>
using namespace std;

bool kiem_tra(int a)
	{
		if (a<=0) return false;
		else return true;
	}

void UCLN(int x, int y)
	{
		int max=0, be, lon;
		if (x<y)
	    {
	    	be = x;
	    	lon = y;
	    }
	    else
	    {
	    	be = y;
	    	lon = x;
	    }
		if (lon%be==0) max=be;
		else
			{
			    float m = sqrt(be);
			    for (int i = 1; i <= m; i++)
			        {
						if (be%i==0)
			                {
			                    if (max<i && lon%i==0) max=i;
			                    if (max<be/i && lon%(be/i)==0) max=be/i;
			                }
			        }
			}
	    cout<<max;
	}

int main()
{
	int a, b;
	cout<<"Nhap so nguyen duong a: "; cin>>a; cout<<"\n";
	//kiem tra dieu kien nhap: so nguyen duong
	while (not kiem_tra(a))
		{
			cout<<"Yeu cau mot so NGUYEN DUONG! Vui long nhap lai: ";
			cin>>a;
		}
	cout<<"Nhap so nguyen duong b: "; cin>>b; cout<<"\n";
	while (not kiem_tra(b))
		{
			cout<<"Yeu cau mot so NGUYEN DUONG! Vui long nhap lai: ";
			cin>>b;
		}
	//tim uoc chung lon nhat cua a va b
	cout<<"Uoc chung lon nhat cua "<<a<<" va "<<b<<" la: ";
	UCLN(a,b);
}
