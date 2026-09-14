#include "sort.h"
void read(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
}

void print(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void insertion_sort(int a[], int n)
{
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}
}
	/***************************************************
	 * Даалгавар: Энэ хэсэгт өөрийн insertion sort-ийг
	 * хийх кодыг бичнэ.
	 * a     нь эрэмбэлэх хүснэгт
	 * n     нь хүснэгтэд байгаа утгуудын тоо
	 ***************************************************/



void selection_sort(int a[], int n)
{
	int i, j, min_idx, temp;
	for (i = 0; i < n - 1; i++) {
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[min_idx])
				min_idx = j;
		}
		temp = a[min_idx];
		a[min_idx] = a[i];
		a[i] = temp;
	}
}
	/***************************************************
	 * Даалгавар: Энэ хэсэгт өөрийн selection sort-ийг
	 * хийх кодыг бичнэ.
	 * a     нь эрэмбэлэх хүснэгт
	 * n     нь хүснэгтэд байгаа утгуудын тоо
	 ***************************************************/
        
}

void bubble_sort(int a[], int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
	/***************************************************
	 * Даалгавар: Энэ хэсэгт өөрийн bubble sort-ийг
	 * хийх кодыг бичнэ.
	 * a     нь эрэмбэлэх хүснэгт
	 * n     нь хүснэгтэд байгаа утгуудын тоо
	 ***************************************************/
