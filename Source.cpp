#include <stdio.h>
#include <math.h>


/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]);
int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
double getAverage(int myArray[]);
int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[] );
void printGroupMemberNames();

int main(void) {
	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;

    printf("The sum of squares of the array is: %i\n", getSumOfSquares(row));
    printf("The average of the array is: %f\n", getAverage(row));

	return 1;
}

void printGroupMemberNames() {
	printf("Socretquuliqaa Lee\n"); //added by Socretquuliqaa Lee
}

/**
 * A function to get the average of the array.
 * @param int[] - An array of integers.
 * @return double - The average of the array.
 * @author Socretquuliqaa Lee
 */
double getAverage(int myArray[]) {
	int total = 0;

	for (int i = 0; i < 500; i++) {
		total += myArray[i];
	}

	double average = total / (double) 500;

	return average;
}	//end of getAverage()

/**
 * A function to get the sum of the squared of each element.
 * @param int[] - An array of integers.
 * @return int - The sum of the squared of each element.
 * @author Socretquuliqaa Lee
 * */
int getSumOfSquares(int myArray[]) {
	int sum = 0;
	for (int i = 0; i < 500; i++) {
		sum += pow(myArray[i],2);
	}

	return sum;
}	//end of getSumOfSquares