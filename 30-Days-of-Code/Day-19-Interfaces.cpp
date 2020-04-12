
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int sum=0;
        if(n == 1)
            return 1;

        for(int lo=1, hi=n; lo<hi; lo++){   //1 2 3
            
            if( n % lo) //false false false
                continue;

            sum += lo;  //1 9 15
            hi = n/lo;  //6 3 2
            if( hi<=lo )//false false
                break;
            sum += hi;  //7 12
        }
        return sum;
    }
};

