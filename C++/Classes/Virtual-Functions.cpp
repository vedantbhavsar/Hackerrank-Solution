class Person{

public:
    string name;
    int age,sum=0;

public:
    virtual void getdata()=0;
    virtual void putdata()=0;

};

class Professor: public Person{

public:
    int publications;
    int cur_id;
    static int seq;

public:
    Professor():cur_id(seq++){}

    void getdata(){
        cin >> name >> age;
        cin >> publications;
    }
    void putdata(){
        cout << name << " " << age << " " << publications << " " << cur_id << endl; 
    }
    
};

int Professor::seq = 1;

class Student: public Person{

public:
    int marks[6];
    int cur_id;
    static int seq;

public:
    Student():cur_id(seq++){}

    void getdata(){
        cin >> name >> age;
        for(int i=0; i<6; i++){
            cin >> marks[i];
        }
    }
    void putdata(){
        cout << name << " " << age << " ";
        for(int i=0; i<6; i++){
            sum += marks[i];
        }
        cout << sum << " " << cur_id << endl;
    }

};

int Student::seq = 1;

