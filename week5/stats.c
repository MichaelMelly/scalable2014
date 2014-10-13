/*
COMPUTES AVERAGE AND VARIANCE OF AN ARRAY OF VALUES
*/

#include <stdio.h>

float calcAverage (int data[],int size);
float returnedAverage;
int sumOfValues = 0;
int size = 10;

int main (int argc,char** argv){

/*fills array */

int data[size];
float average;

for (int i = 0; i < size; i++ ){
 	data[i] = i;
	}
/*
 
*/

returnedAverage = calcAverage(data,size);
printf("the average is %f",returnedAverage );

printf("this is the end of main\n");
}
/*

*/

float calcAverage (int data[size],int size){

		for (int i=0; i< size;i++){
			sumOfValues = sumOfValues + data[i];

		}

printf("this is from the calcAverage function \n");
return sumOfValues; 

}

