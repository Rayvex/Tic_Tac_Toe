#include <iostream>
#include <string>
//Dank memes
using namespace std;


char square [10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkvictory();
void mapping();
void clear();
bool playAgain = true;


int main()
{
    int player = 1,i,choice;
    char mark;

    while (playAgain == true)
    {
        do
        {
            mapping();
            player=(player%2)?1:2;

            cout << "     Player " << player << " make your move." << endl;
            cout << "     "; cin >> choice;
            clear();

            mark = (player == 1) ? 'X' : 'O';

            if (choice == 1 && square[1] == '1')
                square[1] = mark;

            else if (choice == 2 && square[2] == '2')
                square[2] = mark;

            else if (choice == 3 && square[3] == '3')
                square[3] = mark;

            else if (choice == 4 && square[4] == '4')
                square[4] = mark;

            else if (choice == 5 && square[5] == '5')
                square[5] = mark;

            else if (choice == 6 && square[6] == '6')
                square[6] = mark;

            else if (choice == 7 && square[7] == '7')
                square[7] = mark;

            else if (choice == 8 && square[8] == '8')
                square[8] = mark;

            else if (choice == 9 && square[9] == '9')
                square[9] = mark;

            else
            {
                cout << "That's an invalid move, my friend. Try again " << endl;

                player--;
                cin.ignore();
                cin.get();
            }
            i=checkvictory();

            player++;

        }

        while(i==-1);
        {
            mapping();
            if(i==1)
                cout<<"     \aPlayer " << --player << " win!";

            else
                cout<<"     \aThe game has ended in a draw!";

            cin.ignore();
            cin.get();
        }

        cout << "Would you like to play again? (y/n)";
        char answer{0};
        cin >> answer;

        if (answer == 'y')
        {
            cout << "Yea! Let's play again!" << endl;
            playAgain = true;
        }


        if (answer == 'n')
        {
            cout << "Thank you for playing!" << endl;
            playAgain = false;
        }

    }

    return 0;
}
//Check for win
int checkvictory()
{
    if (square[1] == square[2] && square[1] == square[3])
        return 1;

    else if (square[1] == square[5] && square[1] == square[9])
        return 1;

    else if (square[1] == square[4] && square[1] == square[7])
        return 1;

    else if (square[2] == square[5] && square[2] == square[8])
        return 1;

    else if (square[3] == square[5] && square[3] == square[7])
        return 1;

    else if (square[3] == square[6] && square[3] == square[9])
        return 1;

    else if (square[4] == square[5] && square[4] == square[6])
        return 1;

    else if (square[3] == square[6] && square[3] == square[9])
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' &&
             square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;

    else
        return -1;
}
//************


//The game's map
void mapping()
{
    cout << "\n\n            Tic Tac Toe \n\n";
    cout << "  Player 1 = X   -   Player 2 = O    " << endl << endl;
    cout << endl;
    cout << "      _______________________" << endl;
    cout << "     |       |       |       |" << endl;
    cout << "     |   " << square[1] << "   |   " << square[2] << "   |   " << square[3] << "   |" << endl;
    cout << "     |_______|_______|_______|" << endl;
    cout << "     |       |       |       |" << endl;
    cout << "     |   " << square[4] << "   |   " << square[5] << "   |   " << square[6] << "   |" << endl;
    cout << "     |_______|_______|_______|" << endl;
    cout << "     |       |       |       |" << endl;
    cout << "     |   " << square[7] << "   |   " << square[8] << "   |   " << square[9] << "   |" << endl;
    cout << "     |_______|_______|_______|" << endl << endl;
    cout << endl;
}
//************


//A "clear" command instead of using int system()
void clear()
{
    cout << string(10, '\n');
}
