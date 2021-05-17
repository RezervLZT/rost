#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NUMPOINT 30000 // количество точек
#define PI 3.1415926536
// Функция вычисления определенного интеграла
double Integral(double *f, double step) {
  double value = 0;
  for (int i = 0; i < NUMPOINT; i++) {
    value += f[i];
  }
  value *= step;
  return value;
}
int main() {
  double *f;
  double step, t;
  double S;
  int i;
  //system("chcp 1251");
  //system("cls");
  f = (double*)malloc(NUMPOINT * sizeof(double));
  printf("Количество точек = %d\n", NUMPOINT);
  step = PI / NUMPOINT; // величина шага (высота трапеций)
  printf("Величина шага = %lf\n", step);
  t = 0.0;
  // Инициализация значений функции f(t)=sin(t)
  for (i = 0; i<NUMPOINT; i++) {
    f[i] = sin(t);
    t += step;
  }
  S = Integral(f, step); // вычисление интеграла
  printf("Значение интеграла = %lf", S);
  getchar();
  return 0;
}
