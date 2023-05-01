#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
double Subtraction();
double Addition();
double Multiplication();
double Division();
bool Continue(char);

int main()
{
    int operation;
    char moreMath;

    do
    {
        cout << "Please choose an operation from the menu below" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;

        cin >> operation;
        switch (operation)
            {
            case 1:
            {
                Addition();
                Continue(moreMath);
            }
            break;
            case 2:
            {
                Subtraction();
                Continue(moreMath);
            }
            break;
            case 3:
            {
                Multiplication();
                Continue(moreMath);
            }
            break;
            case 4:
            {
                Division();
                Continue(moreMath);
            }
            break;
            case 5: return(0);
            break;
            } 
    } while (true);

    cout << "Hopefully you got your question answered..." << endl;
    cout << "Bye Bye Now!" << endl;
    return(0);
}

double Addition()
{
    int quantity_numbers;
    double sum;

    cout << "How many different elements are being added together? ";
    cin >> quantity_numbers;

    double element[quantity_numbers];

    for(int i = 0; i < quantity_numbers; i++)
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

    cout << "How many different elements are being subtracted together? ";
    cin >> quantity_numbers;

    double element[quantity_numbers];

    for(int i = 0; i < quantity_numbers; i++)
    {
        cout << "What is element " << i << "? ";
        cin >> element[i];
        total -= element[i];
    }
    return total;
}
double Multiplication()
{
    int quantity_numbers;
    double product;
    
    cout << "How many different elements are being multiplied together? ";
    cin >> quantity_numbers;
    
    double element[quantity_numbers];

    for(int i = 0; i < quantity_numbers; i++)
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
    double total;

    cout << "How many different elements are being divided together? ";
    cin >> quantity_numbers;

        double element[quantity_numbers];

    for(int i = 0; i < quantity_numbers; i++)
    {
        cout << "What is element " << i << "? ";
        cin >> element[i];
        total /= element[i];
    }
    return total;
}
bool Continue(char moreMath)
{
    cout << "Do you want to continue doing some math? Please enter n or N for no or Y or y for yes. ";
    cin >> moreMath;
    if (moreMath == 'n' || 'N')
    {
        return false;
    }
    else if (moreMath == 'y' || 'Y')
    {
        return true;
    }
    else
    {
        cout << "Please enter a valid submission ";
        cin >> moreMath;
    }
}