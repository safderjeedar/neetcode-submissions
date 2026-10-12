class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
         List<List<String>> ans;
         Map<String,List<String>> mp = new HashMap<>();
        for(String s: strs){
            char[] arr = s.toCharArray();
            Arrays.sort(arr);
            String S = new String(arr);
            mp.putIfAbsent(S,new ArrayList<>());
            mp.get(S).add(s);

        }
        return new ArrayList<>(mp.values());
    }
}
