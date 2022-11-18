#include <stdio.h>
#include <stdlib.h>

int aux;
void ordenar(int list[], int n);
int main()
{
    int n=0;
    printf("Ingrese el cuantos numeros desea ordenar: ");
    scanf("%d",&n);
    int list [n];
    for (int i=0;i<n;i++){
        printf("Ingrese los numeros a ordenar: ");
        scanf("%d",&list[i]);}
    ordenar(list,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",list[i]);
    }
    return 0;
}
void ordenar (int list[], int n) {
    for (int i=0;i<n-1;i++) {
    	 int min=i;
		for (int j=i+1;j<n;j++) {
			if (list[j]<list[min]) 
				min=j;
		}
		if (min!=i) {
		    aux = list[min];
		    list[min] = list[i];
		    list[i] = aux;
		}
	}
}

