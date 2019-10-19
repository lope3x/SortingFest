#include <stdio.h>

void swap(int* array, int i, int j) {
    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}

void quicksortRec (int esq, int dir, int* array) {
   int i = esq, j = dir;
   int pivo = array[(dir+esq)/2];
   while (i <= j) {
      while (array[i] < pivo) i++;
      while (array[j] > pivo) j--;
      if (i <= j) {
         swap(array, i, j);
         i++;
         j--;
      }
   }
   if (esq < j)  quicksortRec(esq, j, array);
   if (i < dir)  quicksortRec(i, dir, array);
}


void quicksort(int array[], int n) {
    quicksortRec(0, n, array);
}

int main(int argc, char const *argv[]) {
    
    int n;

    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    quicksort(array, n);

    printf("Hello Hacktoberfest!\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

