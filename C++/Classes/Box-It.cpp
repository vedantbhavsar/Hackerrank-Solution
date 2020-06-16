
//Implement the class Box  
class Box{
//l,b,h are integers representing the dimensions of the box
private:
    int l,b,h;
// The class should have the following functions : 
public:
// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
    Box(){
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int len, int bre, int hei){
        l = len;
        b = bre;
        h = hei;
    }
    Box(const Box& B){
        l = B.l;
        b = B.b;
        h = B.h;
    }

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        return (long long)l*b*h;
    }

//Overload operator < as specified
//bool operator<(Box& b)
    bool operator<(Box& B){

        if(l < B.l)
            return true;
        else if(l == B.l){

            if(b < B.b)
                return true;
            else if(b == B.b){

                if(h < B.h)
                    return true;

            }
        }
        return false;
    }

};
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
ostream& operator<<(ostream& out, Box& B){
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}
