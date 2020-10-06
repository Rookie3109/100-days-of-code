/*
Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
*/


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char *uptonine[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i++ ){
        if (i <= 9){
            cout << uptonine[i] << endl;
        }
        else if (i % 2 == 0){
            cout << "even" << endl;
        }
        else{
            cout << "odd" << endl;
        }
    }
    return 0;
}