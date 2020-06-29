import java.math.BigDecimal;
import java.util.*;

class Solution{

    public static void main(String []args){
    
        //Input
        Scanner sc= new Scanner(System.in);
    
        int n=sc.nextInt();
        String []s=new String[n+2];
        for(int i=0;i<n;i++){
            s[i]=sc.next();
        }
      	sc.close();

        //Write your code here
        Arrays.sort(s, 0, n, new Comparator<String>(){

            public int compare(String a1, String a2){

                BigDecimal b1 = new BigDecimal(a1);
                BigDecimal b2 = new BigDecimal(a2);
                return b2.compareTo(b1);

            }
        
        });

        //Output
        for(int i=0;i<n;i++)
        {
            System.out.println(s[i]);
        }
    }

}
