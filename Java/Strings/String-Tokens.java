import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        
        // Write your code here.
        s = s.trim();   //removes spaces from first and last position "   geekynerd  " ==>> "geekynerd"
        
        if(s.length() == 0){
            
            System.out.println(0);
            return;
        
        }
        else{

            String sym[] = s.split("[!,?.*_'@\\ ]+");
            
            int count = sym.length;
            System.out.println(count);

            for(String ss : sym)
                System.out.println(ss);
        
        }

        scan.close();
    }
}
