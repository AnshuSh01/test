import java.util.*;
class arraylinear {
    public static void main(String args[]) {
        System.out.println("How many size of array");
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int arr[] =new int[n];
        System.out.println("Enter the elements of array");
        for (int i = 0; i <n; i++) {
            arr[i]=sc.nextInt();

            
        }
    
        System.out.println("Enter which number u find to");
        int num=sc.nextInt();
        
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                System.out.println(num+ "found at index"+j);


            }
           
        }



        
    }
    
}
