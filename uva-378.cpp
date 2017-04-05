#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

main()
{
	int n;
	int x1,y1,x2,y2,x3,y3,x4,y4;
	int k1,k2;//斜率判断是否平行
	int b1,b2;//截距判断是否同一直线
	double xx,yy;
	cin>>n;
	printf("INTERSECTING LINES OUTPUT\n");
	while(n--)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		k1=(y1-y2)/(x1-x2);
		b1=y1-k1*x1;
		k2=(y3-y4)/(x3-x4);
		b2=y3-k2*x3;
		if(k1==k2&&b1==b2)
			printf("LINE\n");
		else if(k1==k2&&b1!=b2)
			printf("NONE\n");
		else
		{
			xx=(b2-b1)/(k1-k2);
			yy=k1*xx+b1;
			printf("POINT %.2f %.2f\n",xx,yy);
		}
	}
	 printf("END OF OUTPUT\n");
}
