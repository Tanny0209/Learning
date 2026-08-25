/*
 * PURPOSE:
 * This lesson is about 2D VECTORS — a vector of vectors, basically a 2D grid or
 * matrix. Each row is itself a vector, and I can access any cell with [row][col].
 * This is useful when I need tables, grids, or any row-column style data like
 * a chess board, spreadsheet, or image pixels.
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declare a 2D vector: vector<vector<int>> means "a vector of int-vectors".
    // Here I create it with 3 rows, each row having 4 columns initialized to 0.
    // So matrix has 3 rows × 4 cols = 12 zeros initially.
    vector<vector<int>> matrix(3,vector<int>(4));

    // Overwrite the matrix with actual values using an initializer list.
    // Now it has 4 rows and 3 columns — the size changed automatically!
    // Row 0: {10, 20, 30}, Row 1: {40, 50, 60}, etc.
    matrix={{10,20,30},
            {40,50,60},
            {70,80,90},
            {100,200,300}};

    // Accessing a single element: matrix[row][col]
    // matrix[1][2] means Row 1, Column 2 → value is 60
    // Remember: indexing starts at 0, so row 1 is the SECOND row.
    cout << "\n--- Accessing A Single Element ---" << endl;
    cout << "matrix[1][2] = " << matrix[1][2] << endl;

    // Now I traverse the entire 2D vector using nested loops.
    // Outer loop (i) walks through each ROW — matrix.size() gives total rows.
    // Inner loop (j) walks through each COLUMN in that row — matrix[i].size()
    // gives the number of columns in row i.
    // This works even if rows have different sizes (jagged arrays).
    cout << "\n--- Traversing The 2D Vector ---" << endl;
    cout << "The matrix is:" << endl;
    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        // Print a newline after each row is done — this makes it look like a grid
        cout << endl;
    }

    return 0;
}
