public class problem1 {
    public int find(int[] nums) {

        int k=0;
        
        
        int c=0;

     
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1){
                k++;
                

            }
            else{
                c=Math.max(c, k);
                k=0;
            }
            
        }
        c = Math.max(c, k);
        return c;
        
        
    }
}

