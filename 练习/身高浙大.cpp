#include<stdio.h>
int main()
{
	printf("请分别输入身高的英尺和英寸，"
	    "如输入\"5 7\"表示5英寸7英尺：");
	    float foot;
	    float inch;
	scanf("%f %f",&foot,&inch);
	printf("身高是%f米\n",
	((foot + inch/12)*0.3048));
	return 0;
}
