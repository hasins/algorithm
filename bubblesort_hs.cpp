#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int num, i, j, tm_arr, done;
	printf("array num : ");
	scanf("%d", &num);

	int array[num];
	srand(time(NULL));
	for (i=0; i<num; i++){
		array[i]=rand()%10;
		printf("%d num is : %d\n",i+1, array[i]); //%10);
	}

	for(i=0; i<num; i++)
	{
	 for(j=0; j<num-1; j++)
		{
		if (array[j]>array[j+1])
			{
			tm_arr=array[j];
			array[j] = array[j+1];
			array[j+1] = tm_arr;	
			}
		}
	}
	for (i=0; i<num; i++)
	{
		printf("sort array[%d] is : %d\n",i+1, array[i]);

	}
		
}
