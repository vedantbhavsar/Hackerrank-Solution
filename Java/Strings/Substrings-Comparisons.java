import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";
        
        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'

        smallest = s.substring(0,k);
        largest = s.substring(0,k);

        for(int i=0; i<=s.length() - k; i++){

            String curr = s.substring(i, i+k);
            
            if(smallest.compareTo(curr) > 0)
                smallest = curr;
            if(largest.compareTo(curr) < 0)
                largest = curr;

        }
        
        return smallest + "\n" + largest;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}
