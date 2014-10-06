/*
Anatomy of C program
- data and data types
- compile time and runtime arrays
- loops
- branching
- functions
*/

#include <stdio.h>
void test(int value);

/*
always have main
*/
int main (int argc,char** argv){
/*
array
*/
int data[10];
test(15);
/*
shows that function returns to main at the end of the program
*/
printf("this is the end of main\n");
}
/*
this function returns nothing
*/

void test(int value){

		if (value>10){

			printf("thats a big number\n");

		}
for (int i=0; i<10;i++){
printf("this is from the loop\n");

}

}
