#include<stdio.h>
int main()
{
	int firstInningScore = 200;
	int firstInningWickets = 6;
	int secondInningWickets = 3;
	int overs = 5;
	
	int rainDelay = 1;
	float oversPercent = (overs + rainDelay) / 20.0f;
	float wicketsPercent = (secondInningWickets - firstInningWickets) / 10.0f;
	int targetScore = firstInningScore * (1 - oversPercent) * (1 - wicketsPercent);
	printf("Taeget score:%d\n" , targetScore);
	printf("First Inning: %d%d\n" , firstInningScore, firstInningWickets);
	printf("Second Inning: %d%d(target)\n" , targetScore, secondInningWickets);
	return 0;
	
}
