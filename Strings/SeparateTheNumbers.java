import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the separateNumbers function below.
    static void separateNumbers(String s) {
        int flag = 0;
        long first = 0;
        for(int i=0; i<s.length()/2; i++){
            String no = s.substring(0, i+1);
            long num = Long.parseLong(no);
            first = num;
            no = "" + num;
            while(no.length() < s.length()){
                num++;
                no = no + num;
            }
            if(no.equals(s)){
                flag = 1;
                System.out.println("YES " + first);
                break;
            }
        }
        if(flag == 0)
            System.out.println("NO");
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int q = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int qItr = 0; qItr < q; qItr++) {
            String s = scanner.nextLine();

            separateNumbers(s);
        }

        scanner.close();
    }
}
