#include <iostream>
#include <string> // to use to_string() method for converting integer to string.
using namespace std;


/*		 Project Euler Problem 4 in C++ solution.
	
	Largest Palindrome Product
	A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91x 99
	Find the largest palindrome made from the product of two 3-digit numbers.
*/

/**		SOLUTION
*  There is two ways to solve that problem.
*  First of all is to convert the product of the numbers to a string and reversed it with index,than convert it back to integer and compare eachother.
*  If its the same the for loop are stoping and the result will be given.
*	
*  Secound way is to mundo and divide an integer always to 10 and get the numbers saved to an reversed integer.
* 
*  However the string method is much more efficient than the mundo/dividing methode. 
*/ 

int reverseTheIntViaMundoAndDivide(int);
int reverseTheIntViaString(int); // it gives the reversed integer back.
bool compareTwoInt(int, int); // returns true if both integers are the same.




int main() {


	//settings
	
	// select the largest and lowest numbers to have the possible product of all combinations.
	int higherLimitNumber = 999;
	int lowerLimitNumber = 100; 
	int num, reversedNum, largestPalindrome = 0;



	// two for loops for made the product of two n-digit numbers 
	// n is changeable in settings via higherLimitNumber and LowerLimitNumber
	for (int i = higherLimitNumber; i >= lowerLimitNumber; i--)
	{
		for (int j = higherLimitNumber; j >= lowerLimitNumber; j--)
		{

			num = i * j;
			
			// choose one of them to find reversed Num. 
			
			reversedNum = reverseTheIntViaMundoAndDivide(num);
			//reversedNum = reverseTheIntViaString(num);



			if (compareTwoInt(reversedNum, num)) 
			{
				//prints all paldindromes with the product of two 3 digit number.
				//cout << i << "*" << j << " = " << num<< endl;
				
				// is num larger than 'largestPalindrome' then switch it.
				if (num > largestPalindrome)
					largestPalindrome = num;	
			}
		}//for2 end
	}//for1 end
	cout << "The largest polindrome is:" << largestPalindrome << endl;

	return 0;
}// main end



/**  @brief: reverses the integer and give it back.
*	
*	its using call by value to convert the integer to a string and iterate the index of the stringNumber for reversing the stringNumber. 
*	After reversing the number, its going to converted back to integer and returning that integerNumber back.
*/
int reverseTheIntViaString(int num) {


	//convert the integer to string to iterate between indexes for reversing the number.
	string stringNum = to_string(num);
	string reversedStringNum = "";
	


	// reversing the string number
	for (int i = stringNum.length()-1; i >= 0 ; i--)
	{
		reversedStringNum.push_back(stringNum[i]);	
	}


	// convert reversed string to integer 
	num = stoi(reversedStringNum);
	

	return num; // reversed number is returning back.
}



//if two integers are the same, its returning true. otherwise false.
bool compareTwoInt(int x, int y) {

	if (x != y) {
		return false;
	}

	return true;
}



/**  @brief: reverses the integer and give it back.
* 
*   its using call by value to reverse the integer number via using mundo operator and divide the integer number by 10.
*	At the end it the number 0 and it breaks the wihle loop and returns the reversed integer back.
*/
int reverseTheIntViaMundoAndDivide(int num) {
	
	
	int reversed = 0;

	
	//iterates until the num is 0 for reversing the num.
	while (true) 
	{
		
		int rest;


		rest = num % 10;
		num = num / 10;
		reversed = reversed * 10 + rest;


		// breaks the loop
		if (num == 0)
			break;
	
	
	}//while end


	return reversed;
}


