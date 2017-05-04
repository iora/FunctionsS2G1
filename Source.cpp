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
	printf("The sum of each element in the array is: %i\n", getSum(row));
	printAsChars(row);

	return 1;
}

void printGroupMemberNames() {
	printf("Socretquuliqaa Lee\n"); //added by Socretquuliqaa Lee
	printf("Sereysathia Luy\n");	//added by Sereysathia Luy
}

/**
 * A function to get the average of the array.
 * @param myArray - An array of integers.
 * @return average - The average of the array.
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
 * @param myArray - An array of integers.
 * @return sum - The sum of the squared of each element.
 * @author Socretquuliqaa Lee
 * */
int getSumOfSquares(int myArray[]) {
	int sum = 0;
	for (int i = 0; i < 500; i++) {
		sum += pow(myArray[i],2);
	}

	return sum;
}	//end of getSumOfSquares()

/**
 * Function to get the sum of each element in the array
 * @param myArray - the input array
 * @return sum - the sum of each element in the array
 * @author Sereysathia Luy
 */
int getSum(int myArray[]){
	int sum =0;
	int i;

	for(i = 0; i < 500; i++){
		sum += myArray[i];
	}

	return sum;

}//end of getSum()

/**
 * This is a function to print all the character in the array
 * @param myArray - the input array
 * @return void - nothing
 * @author Sereysathia Luy
 */
void printAsChars(int myArray[]){
	int i;
	printf("The characters within the array are: \n");

	for(i = 0; i < 500; i++ ){
		char c = myArray[i];
		printf("%c\t", c);
	}
	printf("\n");
}//end of printAsChars()

/*Sokhavirith*/

int subtractAllValues(int myArray[])
{
	int i,result;
	for(i=0;i<500;i++)
		result-=myArray[i];
	return result;
}

