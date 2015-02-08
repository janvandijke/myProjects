/***************************************
IF YOU WANT TO CHECK MY WORK, SCROLL
DOWN AND IN THE main() FUNCTION UN-
COMMENT THE FUNCTIONS YOU WANT TO TEST,
THEN RUN. IT WILL LAUNCH THE UNCOMMENTED
FUNCTIONS.


***************************************/
#include <iostream>
#include <string>
using namespace std;

/* Jan van Dijke
0893100
29-11-2014

After Chapter 1 and 2.
"Quiz Yourself"
1D, 2C, 3A, 4B, 5C, 6C.
End of quiz.
*/

// 1. Write a program that prints out your name.


// Here goes!
int PracticeProblem1_1 () {

    cout << "Practice Problem 1:\n\n";
    cout << "Jan van Dijke\n\n";

    return 0;
}

// 2. Write a program that displays multiple lines of text onto the screen, each one displaying the name of one of your friends.
int PracticeProblem1_2 () {

    cout << "Practice Problem 2:\n\n";
    cout << "Friend1Name\nFriend2Name\nFriend3Name\nFriend4Name\nFriend5Name\n";

    return 0;
}

int PracticeProblem1_3 () {

    int enteredNumber;

    cout << "Practice Problem 3:\n\n";
    cout << "\nEnter a number please: ";
    cin >> enteredNumber;
    cout << "\nYou have entered:  " << enteredNumber << endl;

    return 0;
}

int Self1_1_Strings () {

    string enteredName;

    cout << "\nSelf1(Strings):\n\n";
    cout << "\nEnter your name please: ";
    cin >> enteredName;
    cout << "\nYour name is :  " << enteredName;

    return 0;
}

/* Jan van Dijke
0893100
06-01-2015

After Chapter 3.
"Quiz Yourself"
1C, 2D, 3C, 4B, 5C, 6D, 7A.
End of quiz. */


// 1. Write a program that prints out your name in a string.
int PracticeProblem2_1 () {

    string myName = "Jan van Dijke";

    cout << "\n\nPractice Problem 2.1\n";
    cout << "\n\nMy name is: " << myName << " .\n";

    return 0;
}

//2. Write a program that reads in two numbers and adds them together.
int PracticeProblem2_2(){

    int first_input_number;
    int second_input_number;
    int final_number;

    cout << "\n\nPractice Problem 2.2\n";
    cout << "\nPlease enter the first number: ";
    cin >> first_input_number;
    cout << "\nThank you! Now please enter the second number: ";
    cin >> second_input_number;

    final_number = first_input_number + second_input_number;
    cout << "\nThe two numbers that you have entered add up to: " << final_number << " .\n";

    return 0;
}

//3. Write a program that performs division of two numbers read from the user and prints out an exact result.
//   Make sure to test your program with both integer inputs and decimal inputs.

int PracticeProblem2_3(){

    double first_input_number;
    double second_input_number;
    double final_number;

    cout << "\n\nPractice Problem 2.3\n";
    cout << "\nPlease enter the first number: ";
    cin >> first_input_number;
    cout << "\nThank you! Now please enter the second number: ";
    cin >> second_input_number;

    final_number = first_input_number + second_input_number;
    cout << "\nThe two numbers that you have entered add up to: " << final_number << " .\n";

    return 0;
}

/* Jan van Dijke
0893100
07-01-2015
 */

//A test-application to check if I understood what I just read.
int self2(){

    int x;

    cin >> x;
    bool is_x_three = x == 3;

    if(is_x_three)
    {
        cout << "\nx is three\n";
    }

    else if(x == 666)
        cout << "\nyou are the devil arent you\n";

    else
    {
        cout << "x is not three";

    }



    if(x > 10)
    {
        cout << "\nmore than 10\n\n";
    }

    else
    {
        cout << "\n\nuwotm8\n\n";
    }

    return 0;
}
//Another one. This is basically taken from the book, but changed up a bit.
int passwordChecker() {
    string password;

    cout << "Enter your password please." << endl;
    getline(cin, password, '\n');

    if (password == "thisisthepassword") {

        cout << "That is correct. You can proceed.";

    }

    else {

        cout << "Well, that one's wrong. Terminating Application.....\n\n";

        return 0;
    }
 return 0;
}

int booleanAnd() {
    if (10 != 4 && 10 == 10)
        cout << "10 is lonely.";
    return 0;
}

int booleanOr() {
    if (10 == 4 || 10 == 10)
        cout << "\n\nBooleanOr returns True. ";
    return 0;
}
//I wrote this to check if I understood everything so far, in this book.
int passwordChecker2() {
    string username;
    string password;
    string enteredUsername;
    string enteredPassword;
    char choice;

    //User picks characters.
    cout << "Enter your username : \n";
    getline(cin, username, '\n');
    cout << "You have picked " << username << " as your username. Press Y to confirm." << endl;
    cin >> choice;

    if (choice == 'Y') {
        cout << "Okay, " << username << " now enter your password: " << endl;
    }

    else {
        return 0;


    }
    cin >> password;
    cout << "You have chosen a password.";

    //Login
    cout << "Alright, now enter your username: ";
    cin >> enteredUsername;
    cout << "Alright, now enter your password: ";
    cin >> enteredPassword;

    if (username == enteredUsername && password == enteredPassword) {
        cout << "Congrats. You are now logged in.";

    }

    else if (username == enteredUsername || password == enteredPassword) {
        cout << "Close enough.";
    }

    else {
        cout << "You have entered absolutely nothing right.";

    }

    return 0;
}

/* Jan van Dijke
0893100
07-01-2015

Quiz Yourself:
1A, 2B, 3A, 4C.
 */


//1 Ask the user for two users' ages, and indicate who is older; behave differently if both are over 100.

int PracticeProblem3_1(){
    int age1;
    int age2;

    cout << "\n\nPractice Problem 3.1. \n\n";
    cout << "Enter the age of person 1: ";
    cin >> age1;

    cout << "\n\nEnter the age of person 2: \n\n";
    cin >> age2;

    if(age1 > age2){
        cout << "\nPerson 1 is older. \n";


    }

    else if(age1 < age2){
        cout << "\nPerson 2 is older. \n";
     }

     else{
        cout << "\nThey're either of the same age, or something just went terribly wrong.\n";

     }

     if(age1 > 100 && age2 > 100){
        cout << "\nThey're both pretty old, actually. Older than 100.\n";

     }



    return 0;
}

//2. Implement a simple "password" system that takes a password in the form of a number.
//   Make it so that either of two numbers are valid, but use only one if statement to do the check.
int PracticeProblem3_2(){

    int enteredPassword;
    int password1 = 1;
    int password2 = 2;

    cout << "\n\nPractice Problem 3.2. \n\n";
    cout << "Enter password: ";
    cin >> enteredPassword;

    if (enteredPassword == password1 || enteredPassword == password2){
        cout << "\n\n Correct password. \n\n";
    }

    else{
        cout << "\n\nThat is not the correct password. \n\n";

    }


    return 0;
}

//3. Write a small calculator that takes as input one of the four arithmetic operations,
//   the two arguments to those operations, and then prints out the result.
int PracticeProblem3_3(){

    char operation;
    int number1;
    int number2;
    int finalNumber;

    cout << "\n\nPractice Problem 3.3. \n\n";
    cout << "Enter operation to perform on 2 number: ";
    cin >> operation;

    cout << "\nNow enter number 1: ";
    cin >> number1;
    cout << "\nNow enter number 2: ";
    cin >> number2;

    if (operation == '*' || operation == 'x'){
        cout << "\nYou have chosen multiplier.\n";

        finalNumber = number1 * number2;
        cout << "The answer is: " << finalNumber;
    }

    else if (operation == '/'){
        cout << "\nYou have chosen division.\n";

        finalNumber = number1 / number2;
        cout << "The answer is: " << finalNumber;
    }

    else if (operation == '+'){
        cout << "\nYou have chosen addition.\n";

        finalNumber = number1 + number2;
        cout << "The answer is: " << finalNumber;
    }

    else if (operation == '-'){
        cout << "\nYou have chosen substraction.\n";

        finalNumber = number1 - number2;
        cout << "The answer is: " << finalNumber;


    }
    return 0;
}


int self5_1(){
    //just learned about loops (do-while, for, while),
    //trying to make some myself
    string enteredPass;
    string enteredPass2;
    do{
    cout << "Hey, enter the password: ";
    getline(cin, enteredPass, '\n'); }
    while (enteredPass != "realpassword");

    cout << "\nGood job m8.\n";

    //let's write that differently
    cout << "\nAlright. Now another time.\nPlease enter the password: ";
    getline(cin, enteredPass2, '\n');

    while (enteredPass2 != "realpassword2") {
        cout << "\n Wrong. Please enter the password: ";
        getline(cin, enteredPass2, '\n');

    }

    cout << "You did it. Nice.";
    return 0;
}

/* Jan van Dijke
0893100
30-01-2015

Quiz Yourself
1B, 2A, 3D, 4C
 */

 int PracticeProblem5_1() {
 // 1. Write a program that prints out the entire lyrics to a full rendition of "99 bottles of beer"
 //int bottlesOfBeer = 99;
 for(int i = 99; i > 1;){
    cout << i << " bottles of beer on the wall, " << i << " bottles of beer.";
    i--;
    cout << "\n Take one down, pass it around, " << i << " bottles of beer on the wall. \n";

    if( i == 1)
        cout << i << " bottle of beer. THE END.";
    }


    return 0;
 }

int PracticeProblem5_2() {
//2. Write a menu program that lets the user select from a list of options, and if the input is not one of the options, reprint the list.
    string choice;

    do {
        cout << "Hello. What is your age? Please select one of these options: \n1. Younger than 100. \n2. Older than 100.\n (Type 1 or 2 to continue.)";
        getline(cin, choice, '\n');
    }
    while(choice != "1" && choice != "2");
        cout << "Thanks.";


    return 0;
}

int PracticeProblem5_3() {
//3. Write a program that computes a running sum of inputs from the user, terminating when the user gives an input value of 0.
    string entered;
    cout << "You can enter anything you like, but if you enter 0 I'm gonna terminate.";
    while(entered != "0"){
    getline(cin, entered, '\n');
    }
    return 0;
}


//CHAPTER 6: FUNCTIONS begins here.

int add(int x, int y){
    return x + y;
    }
int self6_1(){

    //Let's test arguments.

    int result = add( 4124, 52352);

    cout << result;

    //Yeey. It works. Well, it didn't in the first 10 tries, but now it does.

    return 0;
}

//Now the same function as above, but using a reference to it, first,
//so that I can place the addNumber function underneath the self6_2 function.

//the function prototype
int addNumber(int x, int y);

int self6_2(){
    int finalNumber = addNumber(50,10);
    cout << "The final number is :" << finalNumber;
    return 0;
}
//the actual function
int addNumber(int x, int y){
    return x + y;
}


/* Jan van Dijke
0893100
04-02-15

Quiz Yourself
1B, 2B, 3C, 4B
 */

//1. Take the "menu program" you wrote earlier and break it out into
//a series of calls to functions for each of the menu items.
//Add the calculator and "100 bottles of beer" as two different functions that can be called.
int PracticeProblem6_1(){
    string chosenEntry;

    do{
    cout << "\nEnter 'bottles' for '100 bottles of beer',\nor enter 'calculator' for the Calculator: ";
    getline(cin, chosenEntry, '\n');

        if(chosenEntry == "bottles"){
        PracticeProblem5_1();
        }
        else if(chosenEntry == "calculator") {
        PracticeProblem3_3();
        }

        else{
        cout << "\nthat entry does not exist. confirm that it's exactly the same as prompted.";
        }

    }

    while(chosenEntry != "bottles" && chosenEntry != "calculator" );

    return 0;
}
int calculate(int number, int number2, char operation);
int PracticeProblem6_2(){
//2. Make your calculator program perform computations in a separate function.
    int number1;
    int number2;
    char chosenOperation;

    cout << "Enter a number, please: ";
    cin >> number1;
    cout << "Enter number 2, please: ";
    cin >> number2;
    cout << "\nYou have chosen " << number1 << " and " << number2 << endl;
    cout << "Enter an operation, please: ";
    cin >> chosenOperation;

    int calculatedResult = calculate(number1, number2, chosenOperation);

    cout << "The result is: " << calculatedResult << endl;

    return 0;
}

int calculate(int number, int secondNumber, char operation){
    int result;

    if(operation == '*')
        result = number * secondNumber;
    else if(operation == '+')
        result = number + secondNumber;
    else if(operation == '-')
        result = number - secondNumber;
    else if(operation == '/')
        result = number / secondNumber;

    return result;
}

//3. Modify your password program from before to put all of the password checking logic 
//	 into a separate function, apart from the rest of the program. 
int checkPassword(int enteredPass, int firstPass, int secondPass);
int PracticeProblem6_3(){
	
	int enteredPassword;
	int password1 = 1;
	int password2 = 2;

	cout << "\n\nPractice Problem 6.3. \n\n";
	cout << "Enter password('1' or '2'):  ";
	cin >> enteredPassword;
	checkPassword(enteredPassword, password1, password2);

	return 0;
}

int checkPassword(int enteredPass, int firstPass, int secondPass){

	if (enteredPass == firstPass || enteredPass == secondPass){
		cout << "\nCorrect password. \n";
	}

	else{
		cout << "\nThat is not the correct password. \n";
	}

	return 0;
}


/* Jan van Dijke
0893100
08-02-15

Na Enums en Switch
Quiz Yourself
1A, 2B, 3C, 4D
*/

//1. Rewrite the menu program you wrote using a switch-case.
int PracticeProblem8_1(){
	int choice;
		cout << "\nHello! Please enter 1, 2, or 3. \nEntering one of these numbers will return that same number.\n";
		cin >> choice;

		switch (choice){
		case 1:
			cout << "\nYES, YOU DID IT: 1";
			break;
		case 2:
			cout << "\nYES, YOU DID IT: 2";
			break;
		case 3:
			cout << "\nYES, YOU DID IT: 3";
			break;
		default:
			cout << "\nSigh. Wrong.\n\n";
		}
	

	cout << "\n\nTerminating this program...\n";
	system("pause");


	return 0;
}







/* ***************************************
THIS IS ALWAYS AT THE BOTTOM OF THIS FILE
   ***************************************
*/


//Since main() is executed first, it needs to contain all the code that I'm going to run.
int main ()
{
	

    //PracticeProblem1_1();
    //PracticeProblem1_2();
    //PracticeProblem1_3();
   
    //PracticeProblem2_1();
    //PracticeProblem2_2();
    //PracticeProblem2_3();
   
	//PracticeProblem3_1();
	//PracticeProblem3_2();
	//PracticeProblem3_3();

    //PracticeProblem5_1();
	//PracticeProblem5_2();
	//PracticeProblem5_3();
   
    //PracticeProblem6_1();
	//PracticeProblem6_2();
	//PracticeProblem6_3();

	//PracticeProblem8_1();

	//YOU CAN IGNORE THESE, I WROTE THESE TO TEST MY KNOWLEDGE
	//Self1_1_Strings();
	//self2();
	//self5_1();
	//self6_1();
	//self6_2();

	//passwordChecker();
	//passwordChecker2();

    return 0;
}



