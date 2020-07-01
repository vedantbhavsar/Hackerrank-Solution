//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
	
    public static void main(String []argh) throws IOException{

		    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        
        HashMap<String, Integer> m = new HashMap();
        
        while (n-- > 0) {
            
            String name = br.readLine();
            int phone   = Integer.parseInt(br.readLine());
            m.put(name, phone);
        
        }
        
        /* Read each query and check if its in our HashMap */
        String s;
        while((s = br.readLine()) != null) {
            
            if (m.containsKey(s))
                System.out.println(s + "=" + m.get(s));
            else
                System.out.println("Not found");
            
        }
        br.close();

	}

}



