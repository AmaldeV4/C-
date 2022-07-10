#include <iostream>
using namespace std;

void game()
{
    cout << "Hi";
}
    

int main() 
{

    char choice;
    
    cout << "0 - Quit / 1 - Start Game: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        game;
        break;
    
    default:
        break;
    }

    return 0;
}