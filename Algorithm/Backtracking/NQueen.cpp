#include <bits/stdc++.h>
using namespace std;

bool isSafe(bool board[][100], int i, int j, int n)
{
    for (int row = 0; row < i; row++)
    {
        if (board[row][j])
            return false;
    }

    for (int row = i, col = j; row >= 0 && col >= 0; row--, col--) // Left Diagonal
        if (board[row][col])
            return false;

    for (int row = i, col = j; row >= 0 && col < n; row--, col++) // Right Diagonal
        if (board[row][col])
            return false;
    return true;
}

bool solveQueen(bool board[][100], int i, int n)
{
    if (i == n)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (board[i][j])
                    cout << "Q ";
                else
                    cout << "_ ";
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }

    for (int j = 0; j < n; j++)
        if (isSafe(board, i, j, n))
        {
            board[i][j] = true;
            bool ans = solveQueen(board, i + 1, n);
            if (ans)
                return true;

            board[i][j] = false; // Backtracking step
        }
    return false;
}
int main()
{
    int n;
    cin >> n;
    bool board[100][100] = {false};
    bool res = solveQueen(board, 0, n);

    if (!res)
        cout << "No placement is possible " << endl;
    return 0;
}