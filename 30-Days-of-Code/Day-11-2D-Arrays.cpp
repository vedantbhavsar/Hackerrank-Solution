#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int maxsum=-64;  
    int hoursum;   
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            hoursum = arr[i+1][j+1];    
            for(int k=0; k<3; k++)
                {                   
                    hoursum = hoursum + arr[i][j+k] + arr[i+2][j+k]; 
                }             
            if(hoursum > maxsum)         
                maxsum = hoursum;       
        }      
    }     
    cout << maxsum;

    return 0;
}
