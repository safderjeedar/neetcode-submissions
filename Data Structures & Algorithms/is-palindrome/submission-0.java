class Solution {
    public boolean isPalindrome(String s) {
        int i = 0;
        
        String t = "";
        for(char c:s.toCharArray()){
            if(Character.isLetterOrDigit(c)){
                t+=Character.toLowerCase(c);
            }
        }
        System.out.println(t);
        int j = t.length()-1;
        while(i<=j){
           if(t.charAt(i)!=t.charAt(j)){
            return false;
           }
           i++;
           j--;
        }
        return true;
    }
}
