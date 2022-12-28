#include<stdio.h>
int main()
{
	int yr;
    int month,week,day;
	printf("\nEnter day:");
	scanf("%d",&day);
	yr=day/365;
	printf("\nyr:%d",yr);
	month=(day%365)/30;
	printf("\nmonth:%d",month);
	week=((day%365)-(month*30))/7;
	printf("\nweek:%d",week);
	day=(day-(yr*365)-(month*30)-(week*7));
	printf("\nday:%d",day);
	printf("\nyr:month:week:day=%d%d%d%d",yr,month,week,day);
	return 0;
}
