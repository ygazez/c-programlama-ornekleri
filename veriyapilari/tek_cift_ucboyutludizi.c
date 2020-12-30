#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void tek_boyutta_dizi_olustur(int **dizi, int elemansay)
{
	int i;
	*dizi=(int*)malloc(elemansay*sizeof(int));
	for(i=0;i<elemansay;i++)
	{
		*(*dizi+i)=rand()%2;
	}
}
void tek_boyutta_dizi_yaz(int *dizi, int elemansay)
{
	int i=0;
	for(i=0;i<elemansay;i++)
	{
		printf("%d \n",*(dizi+i));
	}
}
void cift_boyutta_dizi_olustur(int ***dizi, int satir, int sutun)
{
	int i,j;
	*dizi=(int**)malloc(satir*sizeof(int*));
	for(i=0;i<satir;i++)
	{
		*(*dizi+i)=(int*)malloc(sutun*sizeof(int));
		for(j=0;j<sutun;j++)
		{
			*(*(*dizi+i)+j)=rand()%2;
		}
	}
	
}
void cift_boyutta_dizi_yaz(int **dizi, int satir, int sutun)
{
	int i,j;
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("%d ",*(*(dizi+i)+j));
		}
		printf("\n");
	}
}

void uc_boyutta_dizi_olustur(int ****dizi, int x, int y, int z)
{
	int i,j,k;
	*dizi=(int***)malloc(x*sizeof(int*));
	for(i=0;i<x;i++)
	{
		*(*dizi+i)=(int**)malloc(y*sizeof(int));
		for(j=0;j<y;j++)
		{
			*(*(*dizi+i)+j)=(int*)malloc(k*sizeof(int));
			for(k=0;k<z;k++)
			{
					*(*(*(*dizi+i)+j)+k)=rand()%2;
			}
		}
	}
}
void uc_boyutta_dizi_yaz(int ***dizi, int x, int y, int z)
{
	int i,j,k;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			for(k=0;k<z;k++)
			{
				printf("%d ",*(*(*(dizi+i)+j)+k));
			}
			printf("\n");
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	
	int *dizi;
	int **dizi2;
	int ***dizi3;
	srand(time(NULL));
	printf("\n TEK BOYUTTA DIZI\n");
	tek_boyutta_dizi_olustur(&dizi,5);
	tek_boyutta_dizi_yaz(dizi,5);
	
	printf("\n CIFT BOYUTTA DIZI\n");
	
	cift_boyutta_dizi_olustur(&dizi2,5,5);
	cift_boyutta_dizi_yaz(dizi2,5,5);
	
	printf("\n UC BOYUTTA DIZI\n");
	uc_boyutta_dizi_olustur(&dizi3,5,3,3);
	uc_boyutta_dizi_yaz(dizi3,5,3,3);
	
	
		return 0;
}
