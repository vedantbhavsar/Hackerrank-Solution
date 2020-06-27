import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) {

        // Complete the function
        if(a == null || b == null || a.length() != b.length())
            return false;

        a = a.toLowerCase();
        b = b.toLowerCase();

        char arr[] = a.toCharArray();
        char brr[] = b.toCharArray();

        int count[] = new int[26];
        int n = arr.length;
        int m = brr.length;

        for(int i=0; i<n; i++){

            count[arr[i] - 97]++;
            count[brr[i] - 97]--;

        }

        for(int i=0; i<26; i++){

            if(count[i] != 0)
                return false;
                
        }
        return true;

    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
