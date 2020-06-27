import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        
        //Solution 1
        /* Enter your code here. Print output to STDOUT. */
        char arr[] = A.toCharArray();
        String rev = "";

        for(int i=arr.length-1; i>=0; i--){
            rev += arr[i];
        }

        if(A.equals(rev))
            System.out.println("Yes");
        else
            System.out.println("No");
        
        //Solution 2
        /* Enter your code here. Print output to STDOUT. */
        String rev = new StringBuilder(A).reverse().toString();
        
        if(A.equals(rev))
            System.out.println("Yes");
        else
            System.out.println("No");
        
    }
}
