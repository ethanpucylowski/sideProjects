#include <iostream>

using namespace std;

int main() {
  int **matrix1;
  int **matrix2;
  int **solutionMatrix;
  int rows1;
  int columns1;
  int rows2;
  int columns2;
  int sum = 0;
  
  cout << "Enter the number of rows for the first matrix: ";
  cin >> rows1;
  cout << endl;
  
  cout << "Enter the number of columns for the first matrix: ";
  cin >> columns1;
  cout << endl;
  
  matrix1 = new int*[rows1];
  for (int i = 0; i < rows1; i++) 
    {
      matrix1[i] = new int[columns1];
    }
  
  cout << "Enter the number of rows for the second matrix: ";
  cin >> rows2;
  cout << endl;

  cout << "Enter the number of columns for the second matrix: ";
  cin >> columns2;
  cout << endl;

  matrix2 = new int*[rows2];
  for (int i = 0; i < rows1; i++) 
    {
      matrix2[i] = new int[columns2];
    }

  if (columns1 != rows2)
  {
    cout << "Error: Matrices not compatible.";
  }
  else
  {
    solutionMatrix = new int*[rows1];
    for (int i = 0; i < rows1; i++)
      {
        solutionMatrix[i] = new int[columns2];  
      }
    
    cout << "Enter the elements of the first matrix: " << endl;
    for(int i = 0; i < rows1; i++)
      {
        for(int j = 0; j < columns1; j++)
          {
            cin >> matrix1[i][j];
          }
      }
    cout << endl;
    cout << "Enter the elements of the second matrix: " << endl;
    for(int i = 0; i < rows2; i++)
      {
        for(int j = 0; j < columns2; j++)
          {
            cin >> matrix2[i][j];
          }
      }
    cout << endl;
    for(int i = 0; i < rows1; i++)
      {
        for(int j = 0; j < columns2; j++)
          {
            for(int k = 0; k < rows1; k++)
              {
                sum += matrix1[i][k] * matrix2[k][j];
              }
            solutionMatrix[i][j] = sum;
            sum = 0;
          }
      }

    for(int i = 0; i < rows1; i++)
      {
        for(int j = 0; j < columns2; j++)
          {
            cout << solutionMatrix[i][j] << " ";
          }
        cout << endl;
      }
  }
}