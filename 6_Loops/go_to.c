//number is  even or not using goto statement 
#include <stdio.h> 

//function to check even or not 
void checkEvenOrNot(int num) 
{ 
	if (num % 2 == 0) 
		// jump to even 
		goto even; 
	else
		// jump to odd 
		goto odd; 

even: 
	printf("%d is even", num); 
	// return if even 
	return; 
odd: 
	printf("%d is odd", num); 
} 

int main() 
{ 
	int num; 
    printf("enter the number: ");
    scanf("%d",&num);
	checkEvenOrNot(num); 
	return 0; 
}
