class Solution {
    boolean kahn(List<List<Integer>> list,int []in){
       Queue<Integer> q = new LinkedList<>();
       int n = list.size();
       for(int i=0;i<n;i++){
          if(in[i]==0)
            q.add(i);
       }
       List<Integer> res = new ArrayList<>();
       while(!q.isEmpty()){
          int node = q.poll();
          res.add(node);
          for(int it:list.get(node)){
             in[it]--;
             if(in[it]==0)
               q.add(it);
          }
       }
       return res.size()==n;
    }
    public boolean canFinish(int numCourses, int[][] prerequisites) {
        List<List<Integer>> list = new ArrayList<>();
        for(int i=0;i<numCourses;i++){
            list.add(new ArrayList<>());
        }
        int [] in = new int[numCourses];
        for(int edges[]:prerequisites){
            int u = edges[0];
            int v = edges[1];
            list.get(v).add(u);
            in[u]++;
        }
         return kahn(list,in);
    }
   
}
