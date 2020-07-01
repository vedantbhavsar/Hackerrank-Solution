import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {

        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        List<Integer> l = new ArrayList<Integer>();
        
        for(int i=0; i<n; i++){
            int x = s.nextInt();
            l.add(x);
        }

        int q = s.nextInt();
        while(q > 0){
         
            String str = s.next();
            if(str.equals("Insert")){

                int pos = s.nextInt();
                int key = s.nextInt();
                l.add(pos, key);

            }
            else{

                int pos = s.nextInt();
                l.remove(pos);
            
            }
            q--;
        
        }

        for(Integer values: l)
            System.out.print(values + " ");

    }
}
