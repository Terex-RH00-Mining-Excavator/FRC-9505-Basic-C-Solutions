
[1]
#include <iostream> 	// Required for std::cout, std::cin
 
int main(){
    int N;                  	// Integer N for storing input
    std::cin >> N;          	// Ask for input
    std::cout << N * 3;     	// Output N * 3
}

[2]
#include <iostream>			// Required for std::cout, std::cin
 
int main(){
    int number;                         		// A variable for storing input
    std::cin >> number;                 		// Ask for input
    for(int i = 0; i < number; i++){	// Start at 0 and end at number
        std::cout << i << " ";          		// Output the next number
    }
}









[3]
#include <iostream>                         		// Required for std::cout, std::cin
 
int max(int firstNumber, int secondNumber){	// Function declaration
    if(firstNumber >= secondNumber){       	// Check max
        return firstNumber;                 		// Return first, if first is max
    }
    return secondNumber;                    		// Otherwise, return second
}
 
int main(){
    int a, b;                               			// a and b store integers
    std::cin >> a >> b;                     		// Ask input for a and b
    std::cout << "Max: " << max(a, b);      	// print out
}
















[4]
#include <iostream>				// Required for std::cout, std::cin
 
void multiplier(int number, int highest){  	// Function declaration
    for(int i = 1; i <= highest; i++){
        std::cout << number << " x " << i << " = " << number*i << "\n"; 	// print
    }
}
 
int main(){
    int num, high;                          			// Store integers
    std::cout << "Give me a number: ";
    std::cin >> num;
    std::cout << "How many multiples? ";
    std::cin >> high;
    multiplier(num, high);                  		// Print out multiples
}

