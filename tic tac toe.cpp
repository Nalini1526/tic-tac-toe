#include <iostream>
using namespace std;

int square[17]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int checkwin();
void board();

int main()
{
	int player = 1,i,choice;

    int mark;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 1 : 0;

        if (choice == 1 && square[1] == 1)

            square[1] = mark;
        else if (choice == 2 && square[2] == 2)

            square[2] = mark;
        else if (choice == 3 && square[3] == 3 )

            square[3] = mark;
        else if (choice == 4 && square[4] == 4)

            square[4] = mark;
        else if (choice == 5 && square[5] == 5)

            square[5] = mark;
        else if (choice == 6 && square[6] == 6)

            square[6] = mark;
        else if (choice == 7 && square[7] == 7)

            square[7] = mark;
        else if (choice == 8 && square[8] == 8)

            square[8] = mark;
        else if (choice == 9 && square[9] == 9)

            square[9] = mark;
            
         else if (choice == 10 && square[10] == 10)

            square[10] = mark;
            
         else if (choice == 11 && square[11] == 11)

            square[11] = mark;
            
         else if (choice == 12 && square[12] == 12)

            square[12] = mark;
            
         else if (choice == 13 && square[13] == 13)

            square[13] = mark;
            
         else if (choice == 14 && square[14] == 14)

            square[14] = mark;
            
         else if (choice == 15 && square[15] == 15)

            square[15] = mark; 
        else if (choice == 16 && square[16] == 16)

            square[16] = mark;
            
            
            
          
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

/*********************************************
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3] && square[3] == square[4])

        return 1;
    else if (square[5] == square[6] && square[6] == square[7] && square[7] == square[8])

        return 1;
    else if (square[9] == square[10] && square[10] == square[11] && square[11] == square[12])

        return 1;
    else if (square[13] == square[14] && square[14] == square[15] && square[15] == square[16])

        return 1;
    else if (square[2] == square[6] && square[6] == square[10] && square[10] == square[14])

        return 1;
    else if (square[3] == square[7] && square[7] == square[11] && square[11] == square[15])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9] && square[9] == square[13])

        return 1;
    else if (square[1] == square[6] && square[6] == square[11] && square[11] == square[16])
        return 1;
    else if (square[4] == square[7] && square[7] == square[10] && square[10] == square[13])

        return 1;
    else if (square[1] != 1 && square[2] != 2 && square[3] != 3
                    && square[4] != 4 && square[5] != 5 && square[6] != 6 
                  && square[7] != 7 && square[8] != 8 && square[9] != 9 && square[10] != 10
                  && square[11] != 11 && square[12] != 12 && square[13] != 13 && square[14] != 14 && square[15] !=   15 && square[16] != 16)

        return 0;
    else
        return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "  |  " << square[4]<< endl;

    cout << "_____|_____|_____|_____" << endl;
    cout << "     |     |     |     " << endl;

    cout << "  " << square[5] << "  |  " << square[6] << "  |  " << square[7] << "  |  " << square[8]<< endl;

    cout << "_____|_____|_____|______" << endl;
    cout << "     |     |     |     " << endl;

    cout << "  " << square[9] << "  |  " << square[10] << "  |  " << square[11]<< "  |  " << square[12] << endl;
     cout << "_____|_____|_____|_____" << endl;
    cout << "     |     |     |     " << endl;

    cout << "  " << square[13] << "  |  " << square[14] << "  |  " << square[15]<< "  |  " << square[16] << endl;


    cout << "     |     |     |     " << endl << endl;
}

/*******************************************************************
                END OF PROJECT
********************************************************************/

