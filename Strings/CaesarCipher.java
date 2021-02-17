import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the caesarCipher function below.
    static String caesarCipher(String s, int k) {
        char c[] = s.toCharArray();
        for(int i=0; i<c.length; i++){
            if(String.valueOf(c[i]).matches("[A-Za-z]")){
                if(Character.isLowerCase(c[i])){
                    c[i] = (char)((c[i] - 'a' + k) % 26 + 'a');
                }
                else if(Character.isUpperCase(c[i])){
                    c[i] = (char)((c[i] - 'A' + k) % 26 + 'A');
                }
            }
        }
        String result = new String(c);
        return result;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        String s = scanner.nextLine();

        int k = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        String result = caesarCipher(s, k);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
