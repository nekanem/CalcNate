# include <iostream>
using namespace std;

int main()
{
  // can not use word operator lol
    char op;
    float num1, num2;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
           cout << num1/num2;
           break;

       default:
           cout << "Error! operator is not correct";
           break;
   }


}
