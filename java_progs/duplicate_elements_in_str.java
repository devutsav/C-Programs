import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
	    
	    Scanner scan=new Scanner(System.in);
	    String str=scan.nextLine();
	    
	    Map<Character,Integer> map= new HashMap<Character, Integer>(); 
	    
	    char[] chars = str.toCharArray();
	    for(Character ch: chars)
	    {
	        if(map.containsKey(ch))
	        {
	            map.put(ch,map.get(ch)+1);
	        }else{
	            
	            map.put(ch,1);
	        }
	    }
	    Set<Character> set = map.keySet();
	    
	    for(Character ch: set)
	    {
	        if(map.get(ch)>1)
	        {
	            System.out.print(ch);
	        }
	    }
	    
		//code
	}
}
