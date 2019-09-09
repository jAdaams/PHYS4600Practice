#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int data[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

	float mean;
	float std_dev;
	int entries=0;
	int tot_Sum=0;
	int tot_Sum1=0;
	float variance; 


	entries = sizeof(data)/sizeof(data[0]);

	printf("The number of entries in array is: %d\n", entries);

	for(int i =0; i<entries;i++)
	{
		tot_Sum += data[i];
	}

	printf("The sum of the entires is %d\n", tot_Sum);

	mean = tot_Sum/entries;

	for(int i = 0; i<entries; i++)
	{
		tot_Sum1 = tot_Sum1 + pow((data[i]-i),2);
	}

	variance = tot_Sum1/entries;
	std_dev = sqrt(variance); 

	printf("The aveage number is the array is: %f\n", mean);
	printf("The Standard Deviation is %f\n", std_dev);


	return 0;



}