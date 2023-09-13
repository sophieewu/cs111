#include <iostream>
using namespace std;

// print triangles
int main(){
    int rows;

    cout << "Enter #rows: ";
    cin >> rows;
    if (rows < 3 ) rows = 3;

    // pyramid
    cout << "pyramid: " << endl;
    for (int r = 1; r <= rows; ++r){
        for (int c1 = 1; c1 <= rows-r; ++c1)
            cout << " ";
        for (int c2 = 1; c2 <= 2*r-1; ++c2)
            cout << "*";
        cout << endl;    
    }

    // alternative solution to print a pyramid
    cout << "pyramid: " << endl;
    for(int r = 0; r < rows; ++r){
        for(int c = 1; c <= (2*rows)-1; ++c){
            if (c >= rows - r && c <= rows + r )                    
                cout<<"*";
            else cout<<" ";   
        }
        cout<<endl;      
    }

    // pyramid pointing to the bottom
    cout << "pyramid pointing to the bottom: " << endl;
    for(int r = rows; r >= 1; --r){
        for (int c1 = 1; c1 <= rows-r; ++c1 )
            cout << " ";
        for(int c1 = 1; c1 <= 2*r-1; ++c1)
            cout << "*";
        cout<<endl;      
    }

    // alternative solution to print pyramid pointing to the bottom
    cout << "pyramid pointing to the bottom: " << endl;
    for (int r = 1; r <= rows; ++r){
        for (int c = 1; c <= 2*rows-r; ++c)
            if (c < r) cout << " ";
            else cout << "*";
        cout << endl;
    }
  
    // sideway pyramid: print the triangle on the top first
    // then the triangle on the bottom.
    cout << "sideway pyramid:" << endl;
    for (int r = 1; r <= rows; ++r) {
        for (int c = 1; c <= r; ++c)
            cout << "*";
        cout << endl;
    }
    for (int r = rows-1; r >= 1; --r) {
        for (int c = 1; c <= r; ++c)
            cout << "*";
        cout << endl;
    }
  
    // lower-left-shaded triangle
    cout << "lower-left-shaded triangle: " << endl;
    for (int r = 1; r <= rows; ++r) {
        for (int c = 1; c <= r; ++c) // inner loop repeats r times
            cout << "*";
        cout << endl;
    }

    // upper-left-shaded triangle
    // r counts down so that it coincides with # asterisks in the row.
    cout << "upper-left-shaded triangle: " << endl;
    for (int r = rows; r >= 1; --r) {
        for (int c = 1; c <= r; ++c)
            cout << "*";
        cout << endl;
    }
  
    // lower-right-shaded triangle
    cout << "lower-right-shaded triangle" << endl;
    for (int r = 1; r <= rows; ++r) {
        for (int c1 = 1; c1 <= rows-r; ++c1)
            cout << " ";
        for (int c2 = 1; c2 <= r; ++c2)
            cout << "*";
        cout << endl;
    }
  
    // upper-right-shaded triangle
    cout << "upper-right-shaded triangle" << endl;
    for (int r = rows; r >= 1; --r) {
        for (int c1 = 1; c1 <= rows-r; ++c1)
            cout << " ";
        for (int c2 = 1; c2 <= r; ++c2)
            cout << "*";

        cout << endl;
    }
  
    // 3 side-by-side lower-right-shaded triangles
    // Put the inner loop inside a loop that repeats 3 times.
    cout << "3 side-by-side lower-right-shaded triangles" << endl;
    for (int r = 1; r <= rows; ++r) {
        for (int copy = 1; copy <= 3; ++copy){
            for (int c1 = 1; c1 <= rows-r; ++c1)
                cout << " ";
            for (int c2 = 1; c2 <= r; ++c2)
                cout << "*";
        }
        cout << endl;
    }
  
    // 3 vertically aligned lower-right-shaded triangles
    // Put the outer loop inside a loop that repeats 3 times.
    cout << "3 vertically aligned lower-right-shaded triangles" << endl;
    for (int copy = 1; copy <=3; copy++) {
        for (int r = 1; r <= rows; ++r) {
            for (int c1 = 1; c1 <= rows-r; ++c1)
                cout << " ";
            for (int c2 = 1; c2 <= r; ++c2)
                cout << "*";
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}