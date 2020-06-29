import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
 
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);

        BigInteger b1 = new BigInteger(s.next());
        BigInteger b2 = new BigInteger(s.next());

        System.out.println(b1.add(b2));
        System.out.println(b1.multiply(b2));

    }
}
