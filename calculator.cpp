#include <iostream>
using namespace std;

char resume; 


int main()
{
    char choice;
    char resume;
    int num1, num2;

    do
    {
        cout << "\n\tSelect Operation [+, -, *, /]: ";
        cin >> choice;

        while (choice != '+' &&choice != '-' &&choice != '*' &&choice != '/')
        {
            printf("\tInvalid Operation!\n");
            cout << "\n\tSelect Operation [+, -, *, /]: ";
            cin >> choice;
        }

        cout << "\tEnter two operands: ";
        cin >> num1 >> num2;

        switch(choice)
        {
            case '+':
                cout << "The sum is " << num1 + num2;
                cout << "\nWould you like to calculate again? [Y/N]: ";
                cin >> resume;
                if (resume == 'N' ||resume == 'n')
                {
                    printf("\n\tThank you for using my calculator!\n\n");
                    break;
                }
                else 
                {
                    continue;
                }
            case '-':
                cout << "The difference is " << num1 - num2;
                cout << "\nWould you like to calculate again? [Y/N]: ";
                cin >> resume;
                if (resume == 'N' ||resume == 'n')
                {
                    printf("\n\tThank you for using my calculator!\n\n");
                    break;
                }
                else 
                {
                    continue;
                }
            case '*':
                cout << "The product is " << num1 * num2;
                cout << "\nWould you like to calculate again? [Y/N]: ";
                cin >> resume;
                if (resume == 'N' ||resume == 'n')
                {
                    printf("\n\tThank you for using my calculator!\n\n");
                    break;
                }
                else 
                {
                    continue;
                }
            case '/':
                cout << "The quotient is " << num1 / num2;
                cout << "\n\n\tWould you like to calculate again? [Y/N]: ";
                cin >> resume;
                if (resume == 'N' ||resume == 'n')
                {
                    printf("\n\tThank you for using my calculator!\n\n");
                    break;
                }
                else 
                {
                    continue;
                }
                
        }
    } while (resume == 'Y' || resume == 'y');
    
    system("pause");
    return 0;
}