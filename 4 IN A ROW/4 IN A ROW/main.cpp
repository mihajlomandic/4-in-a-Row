#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>

using namespace std;


int tableRow = 6;
int tableColumn = 7;
vector<vector<char>> table(tableRow, vector<char>(tableColumn, 'O'));

int columnChoice;
char currentPlayer;


void OutputTable();
void PutInTable();
void Game();


void OutputTable()
{
    cout << "\n";
    for(int i = 0; i < tableRow; i++)
    {
        for(int j = 0; j < tableColumn; j++)
        {
            cout << setw(5) << table[i][j];
        }
        cout << "\n\n";
    }
}

void PutInTable()
{
    for(int i = tableRow-1; i >= 0; i--)
    {
        if(table[i][columnChoice] == 'O')
        {
            table[i][columnChoice] = currentPlayer;
            break;
        }
    }
}

void Game()
{
    OutputTable();

    while(true)
    {
        currentPlayer = '1';
        cout << "Player 1: ";
        cin >> columnChoice;
        columnChoice = columnChoice - 1;
        PutInTable();
        system("cls");
        OutputTable();
        if(false /*FUNCTION TO CHECK IF PLAYER WON*/)
            break;

        currentPlayer = '2';
        cout << "Player 2: ";
        cin >> columnChoice;
        columnChoice = columnChoice - 1;
        PutInTable();
        system("cls");
        OutputTable();
        if(false /*FUNCTION TO CHECK IF PLAYER WON*/)
            break;
    }
}


int main()
{
    Game();

    return 0;
}
