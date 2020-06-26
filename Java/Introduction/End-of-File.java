import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {

        /* Enter your code here. Read input from STDIN. Print output to STDOUT.
        Your class should be named Solution. */
        Scanner s = new Scanner(System.in);
        int i = 0;
        while(s.hasNextLine()){

            String str = s.nextLine();

            if(str.contains("end-of-file")){
                i++;
                System.out.println(i + " " + str);
                break;
            }
            else{
                i++;
                System.out.println(i + " " + str);
            }

        }

    }
}
