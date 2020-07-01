import java.util.*;
class Solution{
	
	public static void main(String []argh){

		Scanner sc = new Scanner(System.in);
		
		while (sc.hasNext()) {
		
        	String input=sc.next();
            //Complete the code
            System.out.println(isBalanced(input));

		}
		
	}

    static boolean isBalanced(String input){

        Stack<Character> s = new Stack<Character>();
        for(int i=0; i<input.length(); i++){

            char ch = input.charAt(i);
            
            if(ch == '(' || ch == '[' || ch == '{')
                s.push(ch);
            
            else if(s.empty())
                return false;

            else{

                char top = s.pop();
                if((top == '(' && ch != ')') || (top == '[' && ch != ']')
                    || (top == '{' && ch != '}'))
                    return false;

            }

        }
        return s.empty();

    }

}
