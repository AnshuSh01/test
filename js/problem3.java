class problem2{
    
    public static void main(String[] args) {
        int nums[] ={-7,-3,2,3,11};
        int c,tep;
        for(int i=0;i<nums.length;i++){
            c=nums[i];
            
            nums[i]=c*c;

        }
        for(int j=0;j<nums.length;j++){
            for(int t=0;t<nums.length-1;t++){
            if(nums[t]>nums[t+1]){
                tep=nums[t];
                nums[t]=nums[t+1];
                nums[t+1]=tep;
            }
        }
        }
        for(int k=0;k<nums.length;k++){
            System.out.print(" "+nums[k]);
        
        }
        
    }
    
}
