#include <iostream>
using namespace std;
/*The break statement skips the rest of the statements in the loop’s block,
  jumping immediately to the next statement outside of the loop.

  The continue statement is similar.
  It also skips the rest of the statements in the loop’s block,
  but instead of terminating the loop, it transfers execution to the iteration of the loop.
  It continues the loop after skipping the remaining statements in its current iteration.
*/
int main(){
    for (int i=0; i<10; ++i){
        if (i == 1)
            continue; // skip the statements below and continue to the next iteration
        cout << i << endl;
        if (i == 2)
            break; // exit the loop
    }  
  
    return 0;
}