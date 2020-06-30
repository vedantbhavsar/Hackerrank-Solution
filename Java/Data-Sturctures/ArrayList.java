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
        ArrayList<ArrayList<Integer>> arr = new ArrayList();

        for(int i=0; i<n; i++){

            int x = s.nextInt();
        
            ArrayList<Integer> a = new ArrayList();
            for(int j=0; j<x; j++){

                int y = s.nextInt();
                a.add(y);

            }
            arr.add(a);

        }

        int q = s.nextInt();
        for(int i=0; i<q; i++){

            int x = s.nextInt();
            int y = s.nextInt();

            ArrayList<Integer> a = arr.get(x-1);

            if(y <= a.size())
                System.out.println(a.get(y-1));
            else
                System.out.println("ERROR!");

        }
        
    }
}
