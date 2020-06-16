

// Write your Student class here
class Student{

public:
    int scores[5];

public:
    void input(){

        for(int i=0; i<5; i++)
            cin >> scores[i];
    
    }
    
    int calculateTotalScore(){
        
        int max = 0;
        for(int i=0; i<5; i++)
            max += scores[i];

        return max;
    
    }

};

