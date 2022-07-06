class Solution {
    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
        List<List<Integer>> list = new ArrayList();
        List<Integer> path = new ArrayList();
        dfs(graph, list, path, 0);
        return list;
    }
    
    private void dfs(int[][] graph, List<List<Integer>> list, List<Integer> path, int source){
        path.add(source);
        if(source == graph.length-1) list.add(new ArrayList(path));
        else for(int subPath:graph[source]) dfs(graph, list, path, subPath);
        path.remove(path.size()-1);
    }
}