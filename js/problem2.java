class Main {
    public static void main (String[] args) {
        int c,k=0,j;
        int nums[]={555,901,482,1771};
        int s=0;
   
   for(int i=0;i<nums.length;i++){
       j=nums[i];
       
       while(j!=0){
           j=j/10;
           k++;

       }
       if(k%2==0){
           s++;
      
   }
   
   }
    System.out.println(s);
   
  
 }    
   }
   /*class Solution {
    public int findNumbers(int[] nums) {
        int count=0;
        for(int i =0 ; i< nums.length; i++){
            if((nums[i]>9 && nums[i]<100) || (nums[i]>999 && nums[i]<10000) || nums[i]==100000){
                count++;
            }
        }
        return count;
    }
}*/

    

