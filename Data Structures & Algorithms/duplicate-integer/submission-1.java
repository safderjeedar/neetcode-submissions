class Solution {
    public boolean hasDuplicate(int[] nums) {
      Set<Integer> seen = new HashSet<>();
       for(int it:nums){
         if(!seen.add(it)){
            return  true;
         }
       }
       return false;
    }
}