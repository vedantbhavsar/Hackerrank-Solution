import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
    
      /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
      Scanner s = new Scanner(System.in);

      int count = 0;
      int n = s.nextInt();
      int a[] = new int[n];

      for(int i=0; i<n; i++)
        a[i] = s.nextInt();

      for(int i=0; i<n; i++){

        int sum = 0;
        for(int j=i; j<n; j++){

            sum += a[j];
            if(sum < 0)
                count++;
            
        }
      }
      System.out.println(count);
    
    }
}
