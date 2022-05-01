import java.util.*;

class anshu{
       public static void main(String[] args) {
         
        Scanner a= new Scanner(System.in);
        
        System.out.println("Enter How many Row and Coloumn u want to print star");
        int row=a.nextInt();
        int col=a.nextInt();
        if(row==0 || col==0){
            System.out.println("Enter valid");
        }
        else{
            for(int i=1;i<=row;i++){
                for(int j=1;j<=col;j++){
                    System.out.print("*");

                }
                System.out.println();
            }
        }


       }
}