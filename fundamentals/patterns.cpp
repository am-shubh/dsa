#include <iostream>
using namespace std;

int main()
{

    /* Pattern 1 - Rectangle
        * * * * *
        * * * * *
        * * * * *
     */
    cout << "\nPattern 1 - Rectangle" << endl;
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 5; col++){
            cout << "* ";
        }
        cout << endl;
    }

    /* Pattern 2 - Square of size N (e.g. 8)
        * * * * * * * *
        * * * * * * * *
        * * * * * * * *
        * * * * * * * *
        * * * * * * * *
        * * * * * * * *
        * * * * * * * *
        * * * * * * * *
     */
    cout << "\nPattern 2 - Square of size 8" << endl;
    int n = 8;

    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            cout << "* ";
        }
        cout << endl;
    }

    /* Pattern 3 - Hollow Rectangle
        * * * * *
        *       *
        * * * * *
     */
    cout << "\nPattern 3 - Hollow Rectangle" << endl;
    int row_count = 5;
    int col_count = 7;
    for (int row = 0; row < row_count; row++){
        if (row == 0 || row == row_count - 1){
            for (int col = 0; col < col_count; col++){
                cout << "* ";
            }
        }
        else{
            cout << "* ";
            for (int col = 0; col < col_count - 2; col++){
                cout << "  ";
            }
            cout << "*";
        }
        cout << endl;
    }


    /* Pattern 4 - Half Pyramid
        * 
        * * 
        * * * 
        * * * * 
        * * * * * 
        * * * * * * 
     */
    cout << "\nPattern 4 - Half Pyramid" << endl;
    int num_rows = 6;
    for (int row = 0; row < num_rows; row++){
        for (int col = 0; col < row + 1; col++){
            cout << "* ";
        }
        cout << endl;
    }

    /* Pattern 5 - Inverted Half Pyramid
        * * * * * * 
        * * * * * 
        * * * * 
        * * * 
        * * 
        * 
     */
    cout << "\nPattern 5 - Inverted Half Pyramid" << endl;
    for (int row = 0; row < num_rows; row++){
        for (int col = 0; col < num_rows - row; col++){
            cout << "* ";
        }
        cout << endl;
    }

    /* Pattern 6 - Numeric Half Pyramid
        1 
        1 2 
        1 2 3 
        1 2 3 4 
        1 2 3 4 5 
        1 2 3 4 5 6
     */
    cout << "\nPattern 6 - Numeric Half Pyramid" << endl;
    for (int row = 0; row < num_rows; row++){
        for (int col = 0; col < row + 1; col++){
            cout << col + 1 << " ";
        }
        cout << endl;
    }


    /* Pattern 7 - Numeric Inverted Half Pyramid
        1 2 3 4 5 6 
        1 2 3 4 5 
        1 2 3 4 
        1 2 3 
        1 2 
        1
     */
    cout << "\nPattern 7 - Numeric Inverted Half Pyramid" << endl;
    for (int row = 0; row < num_rows; row++){
        for (int col = 0; col < num_rows - row; col++){
            cout << col + 1 << " ";
        }
        cout << endl;
    }

    /* Pattern 8 - Full Pyramid
            * 
           * * 
          * * * 
         * * * * 
        * * * * *
       * * * * * * 
     */
    cout << "\nPattern 8 - Full Pyramid" << endl;
    for (int row = 0; row < num_rows; row++){
        for (int col = 0; col < num_rows - row - 1; col++){
            cout << " ";
        }
        for (int col = 0; col < row+1; col++){
            cout << "* ";
        }
        cout << endl;
    }

    /* Pattern 9 - Inverted Full Pyramid
       * * * * * * 
        * * * * * 
         * * * * 
          * * * 
           * * 
            * 
     */
    cout << "\nPattern 9 - Inverted Full Pyramid" << endl;
    for (int row = 0; row < num_rows; row++){
        for (int col = 0; col < row; col++){
            cout << " ";
        }
        for (int col = 0; col < num_rows - row; col++){
            cout << "* ";
        }
        cout << endl;
    }

    /* Pattern 10 - Numeric Full Pyramid
            1
           232
          34543
         4567654
        567898765
     */
    cout << "\nPattern 10 - Numeric Full Pyramid" << endl;
    num_rows=5;
    for (int row = 0; row < num_rows; row++){
        for (int col = 0; col < num_rows - row -1; col++){
            cout << " ";
        }
        for (int col = row; col < (row+1)*2 - 1; col++){
            cout << col + 1;
        }
        for (int col = row*2; col > row; col--){
            cout << col;
        }
        cout << endl;
    }

    /* Pattern 11 - Inverted Numeric Full Pyramid
            567898765
             4567654
              34543
               232
                1
     */
    cout << "\nPattern 11 - Inverted  Numeric Full Pyramid" << endl;
    num_rows=5;
    for (int row = 0; row < num_rows; row++){
        for (int col = 0; col < row; col++){
            cout << " ";
        }
        for (int col = num_rows - row; col < (num_rows - row)*2; col++){
            cout << col;
        }
        for (int col = (num_rows - row - 1)*2; col > (num_rows - row - 1); col--){
            cout << col;
        }
        cout << endl;
    }


    /* Pattern 12 - Hollow Pyramid
            *
           * *
          *   *
         *     *
        *********
     */
    cout << "\nPattern 12 - Hollow Pyramid" << endl;

    for(int row = 0; row < num_rows; row++){

        if(row == num_rows - 1){
            for(int col = 0; col < (2*row + 1); col++){
                cout << "*";
            }
        }
        else {

            for(int col = 0; col < num_rows - row - 1; col++){
                cout << " ";
            }
            for(int col = 0; col < (2*row + 1); col++){
                if(col == 0 || col == (2*row)){
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }

        }
        cout << endl;
    }

    /* Pattern 13 - Inverted Hollow Pyramid
            *********
             *     *
              *   *
               * *
                *
     */
    cout << "\nPattern 13 - Inverted Hollow Pyramid" << endl;
    for (int row = 0; row < num_rows; row++){
        if (row == 0){
            for (int col = 0; col < 2*(num_rows - row) - 1; col++){
                cout << "*";
            }
        }
        else {
            for (int col = 0; col < row; col++) {
                cout << " ";
            }
            for (int col = 0; col < 2*(num_rows - row) -1; col++){
                if (col == 0 || col == 2*(num_rows - row -1)){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    /* Pattern 14 - Numeric Hollow Pyramid
        1 
       1 2 
      1   3 
     1     4 
    1 2 3 4 5 
     */
    cout << "\nPattern 14 - Numeric Hollow Pyramid" << endl;
    for(int row = 0; row < num_rows; row++){
        for(int col = 0; col < num_rows - row - 1; col++){
            cout << " ";
        }
        for(int col = 0; col < row+1; col++){
            if(col == 0 || col == row || row == num_rows-1){
                cout << col+1 << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    /* Pattern 15 - Solid Diamond
        *
       ***
      *****
     *******
    *********
    *********
     *******
      *****
       ***
        *
     */
    cout << "\nPattern 15 - Solid Diamond" << endl;
    for (int row = 0; row < num_rows; row++){
        for(int col=0; col< num_rows - row -1; col++){
            cout << " ";
        }
        for(int col=0; col < 2*row+1; col++){
            cout << "*";
        }
        cout << endl;
    }
    for(int row = 0; row < num_rows; row++){
        for(int col = 0; col < row; col++){
            cout << " ";
        }
        for( int col = 0; col < 2*(num_rows - row) -1; col++){
            cout << "*";
        }
        cout << endl;
    }

    /* Pattern 16 - Hollow Diamond
        *
       * *
      *   *
     *     *
    *       *
    *       *
     *     *
      *   *
       * *
        *
     */
    cout << "\nPattern 16 - Hollow Diamond" << endl;
    for(int row =0; row < num_rows; row++){
        for(int col =0; col < num_rows - row - 1; col++){
            cout << " ";
        }
        for(int col = 0; col < 2*row + 1; col++){
            if(col ==0 || col == 2*row){
                cout << "*";
            } else {
                cout << " ";
            }

        }
        cout << endl;
    }
    for(int row = 0; row < num_rows; row++){
        for(int col = 0; col < row; col++){
            cout << " ";
        }
        for(int col = 0; col < 2*(num_rows - row)-1; col++){
            if(col == 0 || col == 2*(num_rows - row -1)){
                cout << "*";
            } else {
                cout << " ";
            }
            
        }
        cout << endl;
    }

    /* Pattern 17 - Hollow Diamond
        **********
        ****  ****
        ***    ***
        **      **
        *        *
        *        *
        **      **
        ***    ***
        ****  ****
        **********
     */
    cout << "\nPattern 17 - Flipped Solid Diamond" << endl;
    for (int row = 0; row < num_rows; row++){
        for(int col=0; col< num_rows - row; col++){
            cout << "*";
        }
        for(int col=0; col < 2*row; col++){
            cout << " ";
        }
        for(int col=0; col< num_rows - row; col++){
            cout << "*";
        }
        cout << endl;
    }
    for(int row = 0; row < num_rows; row++){
        for(int col = 0; col < row+1; col++){
            cout << "*";
        }
        for( int col = 0; col < 2*(num_rows - row-1); col++){
            cout << " ";
        }
        for(int col = 0; col < row+1; col++){
            cout << "*";
        }
        cout << endl;
    }

    /* Pattern 18 - Fancy Pattern - 1
        1
        2*2
        3*3*3
        4*4*4*4
        5*5*5*5*5
        5*5*5*5*5
        4*4*4*4
        3*3*3
        2*2
        1
     */
    cout << "\nPattern 18 - Fancy Pattern - 1" << endl;
    for( int row= 0; row < num_rows; row++){
        for(int col = 0; col < row+1; col++){
            cout << row+1;
            if(col != row){
                cout << "*";
            }
        }
        cout << endl;
    }
    for( int row = 0; row < num_rows; row++){
        for(int col = num_rows - row; col > 0; col--){
            cout << num_rows - row;
            if(col > 1){
                cout << "*";
            }
        }
        cout << endl;
    }

    /* Pattern 19 - Alphabet Palindrome
        A
        ABA
        ABCBA
        ABCDCBA
        ABCDEDCBA
     */
    cout << "\nPattern 19 - Alphabet Palindrome" << endl;
    char ch;
    for(int row = 0; row < num_rows; row++){
        int col;
        for(col = 1; col < row+1; col++){
            ch = col + 'A' - 1;
            cout << ch;
        }
        for(; col>=1; col--){
            ch = col + 'A' - 1;
            cout << ch;
        }

        cout << endl;
    }

    /* Pattern 20 - Hollow Inverted Half Pyramid
        * * * * * 
        *     * 
        *   * 
        * * 
        *
     */
    cout << "\nPattern 20 - Hollow Inverted Half Pyramid" << endl;
    for (int row= 0; row < num_rows; row++){
        for(int col = 0; col < num_rows - row; col++){
            if(col == 0 || col == num_rows-row-1 || row == 0){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    /* Pattern 21 - Numeric Hollow Half Pyramid
        1 
        1 2 
        1   3 
        1     4 
        1 2 3 4 5 
     */
    cout << "\nPattern 21 - Numeric Hollow Half Pyramid" << endl;
    for(int row=0; row<num_rows; row++){
        for(int col=1; col<= row+1; col++){
            if(col == 1 || col == row+1 || row == num_rows - 1){
                cout << col << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    /* Pattern 22 - Numeric Hollow Inverted Half Pyramid
        1 2 3 4 5 
        2     5 
        3   5 
        4 5 
        5  
     */
    cout << "\nPattern 21 - Numeric Hollow Inverted Half Pyramid" << endl;
    for(int row=0; row< num_rows; row++){
        for(int col = row; col< num_rows; col++){
            if(col == row || col == num_rows-1 || row == 0){
                cout << col+1 << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    /* Pattern 23 - Numeric Palindrome Equilateral Pyramid
            1
           121
          12321
         1234321
        123454321
     */
    cout << "\nPattern 23 - Numeric Palindrome Equilateral Pyramid" << endl;
    for(int row= 0; row < num_rows; row++){
        int col;
        for(int col = 0; col < num_rows - row - 1; col++){
            cout << " ";
        }
        for(col = 0; col < row+1; col++){
            cout << col+1;
        }
        --col;
        for(; col>=1; col--){
            cout << col;
        }
        cout << endl;
    }

    /* Pattern 24 - Fancy Pattern - 2
        ********1********
        *******2*2*******
        ******3*3*3******
        *****4*4*4*4*****
        ****5*5*5*5*5****
     */
    cout << "\nPattern 24 - Fancy Pattern - 2" << endl;
    for(int row = 0; row< num_rows; row++){
        for (int col= 0; col < num_rows+3 - row; col++){
            cout << "*";
        }
        for(int col = 0; col< row+1; col++){
            cout << row+1;
            if(col != row){
                cout << "*";
            }
        }
        for (int col= 0; col < num_rows+3 - row; col++){
            cout << "*";
        }
        cout << endl;
    }

    /* Pattern 25 - Solid Half Diamond
        *
        **
        ***
        ****
        *****
        ****
        ***
        **
        *
     */
    cout << "\nPattern 25 - Solid Half Diamond" << endl;
    for(int row=0; row<num_rows; row++){
        for(int col=0; col< row+1; col++){
            cout<< "*";
        }
        cout<< endl;
    }
    for(int row=0; row<num_rows-1; row++){
        for(int col=num_rows-row-1; col>0; col--){
            cout << "*";
        }
        cout << endl;
    }


    /* Pattern 26 - Fancy Pattern - 3
     */
    cout << "\nPattern 26 - Fancy Pattern - 3" << endl;
    cout << "*\n";
    for(int row=1; row<=num_rows; row++){
        int col;
        cout << "*";
        for(col=1; col<=row; col++){
            cout << col;
        }
        col--;
        for(int temp_col = col; temp_col>1; temp_col--){
            cout << temp_col-1;
        }
        cout << "*";
        cout<<endl;
    }
    for(int row=1; row<=num_rows-1; row++){
        int col;
        cout << "*";
        for(col=1; col<=num_rows-row; col++){
            cout << col;
        }
        col--;
        for(int temp_col = col; temp_col>1; temp_col--){
            cout << temp_col-1;
        }
        cout << "*";
        cout<<endl;
    }
    cout << "*\n";


    /* Pattern 27 - Floyd's Triangle
        1
        23
        456
        78910
        1112131415
     */
    cout << "\nPattern 27 - Floyd's Triangle" << endl;
    int counter = 1;
    for(int row = 0; row< num_rows; row++){
        for(int col=0; col< row+1; col++){
            cout << counter;
            counter++;
        }
        cout << endl;
    }

    /* Pattern 28 - Fancy Pattern - 4
        1
        2*3
        4*5*6
        7*8*9*10
        11*12*13*14*15
        11*12*13*14*15
        7*8*9*10
        4*5*6
        2*3
        1
    */
    cout << "\nPattern 28 - Fancy Pattern - 4" << endl;
    counter = 1;
    for(int row=0; row<num_rows; row++){
        for(int col=0; col<row+1; col++){
            cout << counter;
            if(col!=row){
                cout << "*";
            }
            counter++;
        }
        cout << endl;
    }
    for(int row=0; row<num_rows; row++){
        int start = counter-num_rows+row;
        for(int col=start; col<counter; col++){
            cout << col;
            if(col!= counter-1){
                cout << "*";
            }
        }
        counter = start;
        cout << endl;
    }

    /* Pattern 29 - Pascal's Triangle
        1 
        1 1 
        1 2 1 
        1 3 3 1 
        1 4 6 4 1
    */
    cout << "\nPattern 29 - Pascal's Triangle" << endl;
    for(int row=1; row<=num_rows; row++){
        int C = 1;
        for(int col = 1; col<=row; col++){
            cout << C << " ";
            C = C * (row - col) / col;
        }
        cout << endl;
    }

    /* Pattern 30 - Butterfly
        *        *
        **      **
        ***    ***
        ****  ****
        **********
        **********
        ****  ****
        ***    ***
        **      **
        *        *
    */
    cout << "\nPattern 30 - Butterfly" << endl;
    for(int row=0; row< num_rows; row++){
        for(int col=0; col<=row; col++){
            cout << "*";
        }
        for(int col=0; col<2*(num_rows - row -1); col++){
            cout << " ";
        }
        for(int col=0; col<=row; col++){
            cout << "*";
        }
        cout << endl;
    }
    for(int row=0; row<num_rows; row++){
        for(int col=0; col<(num_rows-row); col++){
            cout << "*";
        }
        for(int col=0; col<2*row; col++){
            cout <<" ";
        }
        for(int col=0; col<(num_rows-row); col++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}