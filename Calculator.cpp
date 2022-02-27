#include <iostream>
#include <cmath>
using namespace std;

class simpleCalculator
{
private:
    int num1,
        num2;

public:
    void set_simp_Number()
    {
        int a, b;
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        num1 = a;
        num2 = b;
    }
    void get_simp_calculator()
    {
        int i;
        cout << "Choose the option: \n";
        cout << "1. Additon\n2. Substration\n3. Multiplication\n4. Division\n5. Exit\n";
        cin >> i;
        if (i == 1)
        {
            cout << "Sum of given value is " << num1 + num2 << '\n';
        }
        else if (i == 2)
        {
            cout << "Substration of given value is " << num1 - num2 << '\n';
        }
        else if (i == 3)
        {
            cout << "Multiplication of given value is " << num1 * num2 << '\n';
        }
        else if (i == 4)
        {
            cout << "Division of given value is " << num1 / num2 << '\n';
        }
        else
        {
            cout << "Exit" << exit << "\n";
        }
    }
};
class scientificCalculator
{
private:
    int num1;

public:
    void set_sci_number()
    {
        int c;
        cout << "Enter the number: ";
        cin >> c;
        num1 = c;
    }
    void get_sci_calculator()
    {
        int i;
        cout << "Choose the option: \n";
        cout << "1. Square root\n2. Sin\n3. Cos\n4. Tan\n5. Log\n6. Exit\n";
        cin >> i;
        if (i == 1)
        {
            cout << "The square root is " << sqrt(num1) << '\n';
        }
        if (i == 2)
        {
            cout << "The Sin is " << sin(num1) << '\n';
        }
        if (i == 3)
        {
            cout << "The Cos is " << cos(num1) << '\n';
        }
        if (i == 4)
        {
            cout << "The Tan is " << tan(num1) << '\n';
        }
        if (i == 5)
        {
            cout << "The Log is " << log(num1) << '\n';
        }
        else
        {
            cout << "Exit" << exit << '\n';
        }
    }
};
class hybridCalculator : public simpleCalculator, public scientificCalculator
{
public:
    void take_input()
    {
        int i;
        cout << "Choose the option: \n";
        cout << "1. Simple Calculator\n2. Scientific Calculator\n3. Both Calculator\n4. Exit\n";
        cin >> i;
        if (i == 1)
        {
            set_simp_Number();
            get_simp_calculator();
        }
        else if (i == 2)
        {
            set_sci_number();
            get_sci_calculator();
        }
        else if (i == 3)
        {
            set_simp_Number();
            get_simp_calculator();
            set_sci_number();
            get_sci_calculator();
        }
        else
        {
            cout << "Exit" << exit << '\n';
        }
    }
};

int main()
{
    hybridCalculator hybrid;
    hybrid.take_input();

    return 0;
}