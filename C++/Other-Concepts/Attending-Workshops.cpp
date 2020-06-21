#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
struct Workshop{
    int start_time, duration, end_time;
};

struct Available_Workshops{
    int n;
    vector<Workshop> v;
};

//Implement the functions initialize and CalculateMaxWorkshops
Available_Workshops* initialize(int start_time[], int duration[], int n){

    Available_Workshops* aws = new Available_Workshops;
    aws->n = n;

    for(int i=0; i<n; i++){

        Workshop ws;
        ws.start_time = start_time[i];
        ws.duration = duration[i];
        ws.end_time = start_time[i] + duration[i];
        aws->v.push_back(ws);

    }
    return aws;
}

int CalculateMaxWorkshops(Available_Workshops* aws){

    sort(aws->v.begin(), aws->v.end(), [](Workshop A, Workshop B){
        return A.end_time < B.end_time;
    });

    int ret = 0, curr_end_time = 0;
    for(int i=0; i < aws->n; i++){

        if(aws->v[i].start_time >= curr_end_time){
            ret++;
            curr_end_time = aws->v[i].end_time;
        }
    }
    return ret;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
