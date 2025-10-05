#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#define G 6.67430e-11
int main()
{
	setlocale(LC_ALL, "rus");
	double mass1, mass2, distance, force;
	printf("Ðàñ÷¸ò ñèëû ãðàâèòàöèîííîãî ïðèòÿæåíèÿ\n");
	printf("Ââåäèòå ìàññó ïåðâîãî òåëà (êã):");
	scanf("%1f", &mass1);

	printf("Ââåäèòå ìàññó âòîðîãî òåëà (êã):");
	scanf("%1f", &mass2);
	printf("Ââåäèòå ðàññòîÿíèå ìåæäó òåëàìè (ì):");
	scanf("%1f", &distance);

	force = G * mass1 * mass2 / (distance * distance);
	printf("\nÐåçóëüòàòû ðàñ÷¸òà:\n");
	printf("Ìàññà 1: %.2f êã\n", mass1);
	printf("Ìàññà 2: %.2f êã\n", mass2);
	printf("Ðàññòîÿíèå: %.2f ì\n", distance);
	printf("Ñèëà ïðèòÿæåíèÿ: %.2e H\n", force);
	return 0;
}
