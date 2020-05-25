#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
Integer
Character
Boolean
Floating Point
Double Floating Point
Valueless or Void

 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int startDay = 24;
    int age = 12;
    int shoes = 0;

    char note = 64;
    char velocity = 127;
    char channel = 16;
    
    bool isOpen = true;
    bool isClosed = false;
    bool isBroken = false;
    
    float xAxis = -3.6f;
    float yAxis = 24.3f;
    float price = 0.0f;

    double circlDiam = 12.6;
    double sideA = 126.2;
    double roadLength = 1364.12;

    ignoreUnused(number, startDay, age, shoes, note, velocity, channel, isOpen, isClosed, isBroken, xAxis, yAxis, price, circlDiam, sideA, roadLength); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int ShoeSelection(int shoeSize, int amountBought)
{
    ignoreUnused(shoeSize, amountBought);
    return {};
}
/*
 2)
 */
int timeSheet (int startHour, int startMinutes, int endHour, int endMinutes)
{
    ignoreUnused(startHour, startMinutes, endHour, endMinutes);
    return {};    
}
/*
 3)
 */
char playANote (char note, char velocity = 127, char channel = 1)
{
    ignoreUnused(note, velocity, channel);
    return {}; 
}
/*
 4)
 */
char channelAssign (char channel, char dimmer)
{
    ignoreUnused(channel, dimmer);
    return {}; 
}
/*
 5)
 */
bool doorState(bool isOpen = true, bool isBroken = false)
{
    ignoreUnused(isOpen, isBroken);
    return {}; 
}    
/*
 6)
 */
bool employeeStatus (bool punchedIn, bool onBreak, bool punchedOut = false)
{
    ignoreUnused(punchedIn, onBreak, punchedOut);
    return {}; 
}
/*
 7)
 */
float pixelPosition( float xAxis = -3.6f, float yAxis = 24.3f)
{
    ignoreUnused(xAxis, yAxis);
    return {}; 
}
/*
 8)
 */
float unitPrice(float dollars = 0.00f, float cents  = 0.00f)
{
    ignoreUnused(dollars, cents);
    return {}; 
}
/*
 9)
 */
double triangleArea(double legA = 12.6, double legB = 126.2, double hypotenuse = 126.83)
{
    ignoreUnused(legA, legB, hypotenuse);
    return {}; 
}
/*
 10)
 */
double circleArea(double pi, double diam)
{
    ignoreUnused(pi, diam);
    return {}; 
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto selectedShoe = ShoeSelection(12, 2);
    //2)
    auto punchCard = timeSheet (9, 0, 18, 30);
    //3)
    auto notePlayed = playANote (36, 64, 16);
    //4)
    auto assignedChannel = channelAssign (112, 3);
    //5)
    auto setDoorState = doorState(true, false);
    //6)
    auto setEmployeeStatus = employeeStatus (true, false, false);
    //7)
    auto setPixelPosition = pixelPosition( -3.6f, 24.3f);
    //8)
    auto setApplePrice = unitPrice(12.00f, 0.99f);
    //9)
    auto setTriangleArea = triangleArea(12.6, 126.2, 126.83);
    //10)
    auto setCircleArea = circleArea(3.14159, 12.0);
    
    ignoreUnused(carRented, selectedShoe,punchCard, notePlayed, assignedChannel, setDoorState, setEmployeeStatus, setPixelPosition, setApplePrice, setTriangleArea, setCircleArea);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
