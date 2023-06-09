#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Addition: Check for doubles for quantity of numbers in operation & special square rooting
// Addition: Don't return totals just simply display within functions?

// Function prototypes
double Subtraction();
double Addition();
double Multiplication();
double Division();
double Exponents();
double SquareRoots();
double FindRoot();
double Factorial();
bool Continue();

int main()
{
    int operation;
    double total;
    bool moreMath;

    cout << fixed << setprecision(2) << endl;

    do
    {
        cout << "Please choose an operation from the menu below" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exponents" << endl;
        cout << "6. Square Roots" << endl;
        cout << "7. Finding A Root" << endl;
        cout << "8. Factorial" << endl;
        cout << "9. Quit" << endl;

        total = 0;

        cin >> operation;
        switch (operation)
        {
        case 1:
        {
            total = Addition();
            cout << "The final total is " << total;
            moreMath = Continue();
        }
        break;
        case 2:
        {
            total = Subtraction();
            cout << "The final total is " << total;
            moreMath = Continue();
        }
        break;
        case 3:
        {
            total = Multiplication();
            cout << "The final total is " << total;
            moreMath = Continue();
        }
        break;
        case 4:
        {
            total = Division();
            cout << "The final total is " << total;
            moreMath = Continue();
        }
        break;
        case 5:
        {
            total = Exponents();
            cout << "The final total is " << total;
            moreMath = Continue();
        }
        break;
        case 6:
        {
            total = SquareRoots();
            cout << "The final total is " << total;
            moreMath = Continue();
        }
        break;
        case 7:
        {
            total = FindRoot();
            cout << "The root is " << total;
            moreMath = Continue();
        }
        break;
        case 8:
        {
            total = Factorial();
            cout << "The final total of the factorial is " << total;
            moreMath = Continue();
        }
        break;
        case 9:
        {
            cout << "Thanks for using this Calculator! Bye Bye" << endl;
            return (0);
        }
        break;
        }
    } while (moreMath == true);

    cout << "Hopefully you got your question answered..." << endl;
    cout << "Bye Bye Now!" << endl;
    return (0);
}

double Addition()
{
    int quantity_numbers;
    double sum;

    cout << fixed << setprecision(2) << endl;

    cout << "How many different elements are being added together? ";
    cin >> quantity_numbers;

    double element[quantity_numbers + 1];

    for (int i = 1; i <= quantity_numbers; i++)
    {
        cout << "What is element " << i << "? ";
        cin >> element[i];
        sum += element[i];
    }

    return sum;
}

double Subtraction()
{
    int quantity_numbers;
    double total;

    cout << fixed << setprecision(2) << endl;

    cout << "How many different elements are being subtracted together? ";
    cin >> quantity_numbers;

    double element[quantity_numbers + 1];

    for (int i = 1; i <= quantity_numbers; i++)
    {
        cout << "What is element " << i << "? ";
        cin >> element[i];
    }

    total = element[1];

    for (int i = 1; i < quantity_numbers;)
    {
        i++;
        total = total - element[i];
    }

    return total;
}

double Multiplication()
{
    int quantity_numbers;
    double product = 1;

    cout << fixed << setprecision(2) << endl;

    cout << "How many different elements are being multiplied together? ";
    cin >> quantity_numbers;

    double element[quantity_numbers + 1];

    for (int i = 1; i <= quantity_numbers; i++)
    {
        cout << "What is element " << i << "? ";
        cin >> element[i];
        product *= element[i];
    }
    return product;
}

double Division()
{
    int quantity_numbers;
    double total, value;

    cout << fixed << setprecision(2) << endl;

    cout << "How many different elements are being divided together? ";
    cin >> quantity_numbers;

    double element[quantity_numbers + 1];

    for (int i = 1; i <= quantity_numbers; i++)
    {
        cout << "What is element " << i << "? ";
        cin >> element[i];
    }

    total = element[1];

    for (int i = 1; i < quantity_numbers;)
    {
        i++;
        total = total/element[i];
    }
    return total;
}

double Exponents()
{
    double total, baseNumber;
    int exponentNumber;

    cout << fixed << setprecision(2) << endl;

    cout << "What is the base number and what is the exponent number?" << endl;
    cout << "Base Number: ";
    cin >> baseNumber;
    cout << "Exponent Number: ";
    cin >> exponentNumber;

    total = 1;

    if (exponentNumber == 0)
    {
        total = 1;
    }
    if (exponentNumber == 1)
    {
        total = baseNumber;
    }
    if (exponentNumber == 2)
    {
        total = baseNumber * baseNumber;
    }
    else
    {
        for (int i = 1; i <= exponentNumber;)
        {
            i++;
            total *= baseNumber;
        }
    }

    return total;
}

double SquareRoots()
{
    double total;
    int baseNumber;

    cout << fixed << setprecision(2) << endl;

    cout << "What is the base number we are square rooting? " << endl;
    cout << "Base Number: ";
    cin >> baseNumber;

    total = sqrt(baseNumber);

    return total;
}

double FindRoot()
{
    double total, baseNumber, index, useIndex;
    
    
    cout << fixed << setprecision(2) << endl;
    
    cout << "What is the base number or radicand we are finding the root of?" << endl;
    cout << "Radicand: ";
    cin >> baseNumber;
    cout << "What is the index or root value?" << endl;
    cin >> index;
    
    useIndex = 1/index;
    
    total = pow(baseNumber, useIndex);
    return total;
}

double Factorial()
{
    double total = 1;
    int baseNumber;
    
    cout << fixed << setprecision(2) << endl;
    
    cout << "What is the number we are finding the factorial of? " << endl;
    cout << "Number: ";
    cin >> baseNumber;
    
    for (int i = baseNumber; i > 0; i--)
    {
        total *= i; 
    }
    
    return total;
}

bool Continue()
{
    char moreMath;

    cout << endl << endl;

    cout << "Do you want to continue doing some math? Please enter n or N for no or Y or y for yes. ";
    cin >> moreMath;

    while (moreMath != 'n' && moreMath != 'N' && moreMath != 'y' && moreMath != 'Y')
    {
        cout << "Please enter a valid submission. Enter n or N for no or Y or y for yes. ";
        cin >> moreMath;
    }

    if (moreMath == 'n' || moreMath == 'N')
    {
        return false;
    }
    else if (moreMath == 'y' || moreMath == 'Y')
    {
        return true;
    }

    return false;
}
    
    cout << fixed << setprecision(2) << endl;
    
    cout << "What is the base number or radicand we are finding the root of?" << endl;
    cout << "Radicand: ";
    cin >> baseNumber;
    cout << "What is the index or root value?" << endl;
    cin >> index;
    
    total = pow(baseNumber, 1/index)
    return total;
}

double factorial()
{
    double total = 1;
    int baseNumber;
    
    cout << fixed << setprecision(2) << endl;
    
    cout << "What is the number we are finding the factorial of? " << endl;
    cout << "Number: ";
    cin >> baseNumber;
    
    for (int i = baseNumber; i > 0; i--)
    {
        total *= i; 
    }
    
    return total;
}
*/

bool Continue()
{
    char moreMath;

    cout << endl << endl;

    cout << "Do you want to continue doing some math? Please enter n or N for no or Y or y for yes. ";
    cin >> moreMath;

    while (moreMath != 'n' && moreMath != 'N' && moreMath != 'y' && moreMath != 'Y')
    {
        cout << "Please enter a valid submission. Enter n or N for no or Y or y for yes. ";
        cin >> moreMath;
    }

    if (moreMath == 'n' || moreMath == 'N')
    {
        return false;
    }
    else if (moreMath == 'y' || moreMath == 'Y')
    {
        return true;
    }

    return false;
}
