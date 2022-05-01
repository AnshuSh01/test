import java.util.*;
class funcdemo1{
    public static void printMyName(int age,String name) {
        
        if (age>=18){
            System.out.print(name);
            System.out.print(" is Eligible");
        }
        else{
            System.out.println("Not");
        }
       
    }
    public static void main (String[] args) {
       Scanner sc= new Scanner(System.in);
       System.out.println("ENter Your Age and Name");
       int a=sc.nextInt();
       String b= sc.next();
       printMyName(a,b);
    }
    
}
