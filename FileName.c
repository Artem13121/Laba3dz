#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#define G 6.67430e-11
int main()
{
	double mass1, mass2, distance, force;
	printf("Расчёт силы гравитационного притяжения\n");
	printf("Введите массу первого тела (кг):");
	scanf("%1f", &mass1);

	printf("Введите массу второго тела (кг):");
	scanf("%1f", &mass2);
	printf("Введите расстояние между телами (м):");
	scanf("%1f", &distance);

	force = G * mass1 * mass2 / (distance * distance);
	printf("\nРезультаты расчёта:\n");
	printf("Масса 1: %.2f кг\n", mass1);
	printf("Масса 2: %.2f кг\n", mass2);
	printf("Расстояние: %.2f м\n", distance);
	printf("Сила притяжения: %.2e H\n", force);
	return 0;
}