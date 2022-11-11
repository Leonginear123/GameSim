#include <stdio.h>
#include <stdbool.h>
void Generate(int tab[], int size, int c[], int r, bool* v) {
	if (*v == false) return;
	int i;
	for (i = 0; i < size; i++) tab[i] = i + 1;
};

void Show(int tab[], int size, int c[], int r, bool* v) {
	if (*v == false) return;
	printf("\t\t%d\t\t%d\n", tab[0], tab[1]);
	printf("\t%d\t\t%d\t\t%d\n", tab[2], tab[3], tab[4]);
	printf("\t\t%d\t\t%d\n", tab[5], tab[6]);
};

void R(int tab[], int size, int c[], int r, bool* v) {
	if (*v == false) return;
	int t[size];
	int i;
	for (i = 0; i < size; i++) t[i] = tab[i];
	tab[1] = t[3];
	tab[3] = t[6];
	tab[6] = t[4];
	tab[4] = t[1];
};

void Rp(int tab[], int size, int c[], int r, bool* v) {
	if (*v == false) return;
	int t[size];
	int i;
	for (i = 0; i < size; i++) t[i] = tab[i];
	tab[1] = t[4];
	tab[3] = t[1];
	tab[6] = t[3];
	tab[4] = t[6];
};

void L(int tab[], int size, int c[], int r, bool* v) {
	if (*v == false) return;
	int t[size];
	int i;
	for (i = 0; i < size; i++) t[i] = tab[i];
	tab[0] = t[2];
	tab[2] = t[5];
	tab[5] = t[3];
	tab[3] = t[0];
};

void Lp(int tab[], int size, int c[], int r, bool* v) {
	if (*v == false) return;
	int t[size];
	int i;
	for (i = 0; i < size; i++) t[i] = tab[i];
	tab[0] = t[3];
	tab[2] = t[0];
	tab[5] = t[2];
	tab[3] = t[5];
};

void Exit(int tab[], int size, int c[], int r, bool* v) {
	*v = false;
}