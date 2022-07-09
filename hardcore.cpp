#include <iostream>

using namespace std;

int resume;


int main()
{
    char choice;
    char resume;
    int num1, num2;

    do
    {
        cout << "\n\tSelect Operation [+, -, /, *]: ";
        cin >> choice;

        cout << "Enter two operands: ";
        cin >> num1 >> num2;

        switch(choice)
        {
            case '+':
                cout << "The sum is " << num1 + num2;
                cout << "\nWould you like to calculate again? [Y/N]: ";
                cin >> resume;
                if (resume == 'N' ||resume == 'n')
                {
                    printf("\nThank you for using my calculator");
                    break;
                }
                else 
                {
                    continue;
                }
                
            default:
                printf("Invalid!");
                break;
        }
    } while (resume == 'Y' || resume == 'y');
    
    system("pause");
    return 0;
}