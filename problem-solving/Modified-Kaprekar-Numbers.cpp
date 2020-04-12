#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {

    long long int square, split1, split2, split, check, temp, num;
    check = 0;
    for(num=p; num<=q; num++){

        square = num * num;
        split = 1;
        temp = num;
        while(temp > 0){
            split = split * 10;
            temp = temp / 10;
        }
        split1 = square % split;
        split2 = square / split;
        if( num == split1+split2){
            check++;
            cout << num << " ";
        }
    }
    if(check == 0)
        cout << "INVALID RANGE" << endl;

}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
