#include<stdio.h>
int main()
{
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬"
	    "������\"5 7\"��ʾ5Ӣ��7Ӣ�ߣ�");
	    float foot;
	    float inch;
	scanf("%f %f",&foot,&inch);
	printf("�����%f��\n",
	((foot + inch/12)*0.3048));
	return 0;
}
