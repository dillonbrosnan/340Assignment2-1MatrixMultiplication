#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>
using namespace std;
/*this method is used to multiply matrixes*/
void multiplyMatricies(vector< vector <double> > matrix1, vector< vector <double> > matrix2){
	vector< vector <double> > matrix3; //initialize first new matrix
	int row = matrix1.size(); 
	int col = matrix2[0].size();
	double x;
	for(int r = 0; r < row; r++){
		matrix3.push_back(vector <double>());
		for (int c = 0; c < col; c++){
			matrix3[r].push_back(0.0); //set all elements of new matrix to zero
		}
	}
	for(int i = 0; i < matrix1.size(); i++){
		for (int j = 0; j < matrix2[0].size(); j++){
			for(int k = 0; k < matrix1[0].size(); k++){
				matrix3[i][j] += matrix1[i][k] * matrix2[k][j]; //
			}//update matrix
		}
	}
	cout << "Matrix 3: " << endl; //prints matrix
	for(int r1 = 0; r1 < matrix3.size(); r1++){
		for(int c1 = 0; c1 < matrix3[r1].size(); c1++){
			cout << matrix3[r1][c1] << "   ";
		}
		cout << endl;
	}
}

int main(){
	vector< vector <double> > matrix1;
	vector< vector <double> > matrix2;
	int row1;
	int col1;
	int row2;
	int col2;
	double x;
	//all of the check statments below are to see if user inputs a correct integer
	//for rows and columns of matrix
	cout <<"please enter the number of rows you want for your first matrix: "<< endl;
	cin >> row1;
	while(cin.fail() || row1 <= 0){
		cout << "Please enter whole positive integers only" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> row1;
	}
	cout << "Please enter the number of column you want for your first matrix: " << endl;
	cin >> col1;
	while(cin.fail() || col1 <= 0){
		cout << "Please enter whole positive integers only" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> col1;		
	}
		cout <<"please enter the number of rows you want for your seconnd matrix: "<< endl;
	cin >> row2;
	while(row2 != col1){
		cout << "Number of rows in matrix 1 must equal number of columns in matrix 2" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> row2;
	}
	cout << "Please enter the number of column you want for your second matrix: " << endl;
	cin >> col2;
	while(cin.fail() || col2 <= 0){
		cout << "Please enter whole positive integers only" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> col2;		
	//fills up first matrix with user entries
	}cout<< "Now to fill up the first matrix with numbers: " << endl;
	for(int r1 = 0; r1 < row1; r1++){
		matrix1.push_back(vector<double>());
		for(int c1 = 0; c1 < col1; c1++){
			cout << "Enter a number for row " << r1 << " column " << c1 << ": " << endl;
			cin >> x;
			while (cin.fail ()){
				cout << "Please enter positive numbers only" << endl;
				cin.clear();
				cin.ignore(256, '\n');
				cin >> x;
			}
			matrix1[r1].push_back(x);
		}
	//fill up second matrix with user entries
	}cout << "Now to fill up the second matrix with numbers: " << endl;
	for(int r2 = 0; r2 < row2; r2++){
		matrix2.push_back(vector<double>());
		for(int c2 = 0; c2 < col2; c2++){
			cout << "Enter a number for row " << r2 << " column " << c2 << ": " << endl;
			cin >> x;
			while (cin.fail()){
				cout << "Please enter positive numbers only" << endl;
				cin.clear();
				cin.ignore(256, '\n');
				cin >> x;
			}
			matrix2[r2].push_back(x);
		}
	}
	cout << " ++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "Matrix 1:" << endl;
	for(int r1 = 0; r1 < matrix1.size(); r1++){
		for(int c1 = 0; c1 < matrix1[r1].size(); c1++){
			cout << matrix1[r1][c1] << "  ";
		}
		cout << endl;
	}//prints first matrix
	cout << "Matrix 2: " << endl;
	for(int r1 = 0; r1 < matrix2.size(); r1++){
		for(int c1 = 0; c1 < matrix2[r1].size(); c1++){
			cout << matrix2[r1][c1] << "   ";
		}
		cout << endl;
	}//prints second matrix
	multiplyMatricies(matrix1, matrix2);
	return 0;
}
