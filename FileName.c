#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#define G 6.67430e-11
int main()
{
	double mass1, mass2, distance, force;
	printf("������ ���� ��������������� ����������\n");
	printf("������� ����� ������� ���� (��):");
	scanf("%1f", &mass1);

	printf("������� ����� ������� ���� (��):");
	scanf("%1f", &mass2);
	printf("������� ���������� ����� ������ (�):");
	scanf("%1f", &distance);

	force = G * mass1 * mass2 / (distance * distance);
	printf("\n���������� �������:\n");
	printf("����� 1: %.2f ��\n", mass1);
	printf("����� 2: %.2f ��\n", mass2);
	printf("����������: %.2f �\n", distance);
	printf("���� ����������: %.2e H\n", force);
	return 0;
}