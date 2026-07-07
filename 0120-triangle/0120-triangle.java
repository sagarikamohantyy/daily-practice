class Solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        for(int i=1;i<triangle.size();i++){
            for(int j=0;j<triangle.get(i).size();j++){
                if(j==0){
                    triangle.get(i).set(j,
                    triangle.get(i).get(j)+triangle.get(i-1).get(j));
                }
                else if(j==triangle.get(i).size()-1){
                    triangle.get(i).set(j,
                    triangle.get(i).get(j)+triangle.get(i-1).get(j-1));
                }
                else{
                    triangle.get(i).set(j,
                    triangle.get(i).get(j)+Math.min(
                    triangle.get(i-1).get(j-1),
                    triangle.get(i-1).get(j)));
                }
            }
        }

        int last=triangle.size()-1;
        int min=triangle.get(last).get(0);

        for(int i=1;i<triangle.get(last).size();i++){
            min=Math.min(min,triangle.get(last).get(i));
        }
        return min;
    }
}