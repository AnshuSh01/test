#include<stdio.h>
#include<stdlib.h>

int Narendr_modi()
{
    
    sleep(1);
    int modi=0,m;
      
    modi=modi+1;
    
    
    return modi;
   
    
    
}
int Akhilesh_yadav()
{
    sleep(1);
 int yadav=0,y;
  
     
    yadav=yadav+1;
  
    return yadav;
     
}
int Arvind_kejriwal()
{
     sleep(2);
int kejriwal=0,k;
    
   
    kejriwal=kejriwal+1;
 
    return kejriwal;
    
     
}
int Yoginath()
{
    
    sleep(2);
    int nath=0,n;
    int i=0,j=1;
    
    while(j>i)
    {
    nath=nath+1;
    i++;
    }
    j++;
    printf("\nvooooootteee=%d\n",nath);
     
    return nath;
    
}
 
void vote()
{
     int login,c,pass;
    printf("\n\t\t\t***Welocme to Our Online Voting Organization***\n\n");
    
    printf("\t\t\tFirst Create your account by simply Enter 1\n");
    scanf("%d",&login);
 
    srand(time(0));
 
  for(int i=0;i<1;i++)
    {
        c=1000+rand()%9000;
      printf("\tYour Verification OTP is= %d\n",c);
    }
    printf("\n\tEnter Your OTP to Login into Voter Environment\n");
    scanf("%d",&pass);
    if(pass==c)
    {
          int choice;
    int name;
    printf("\n\tHello Voter\n");
    printf("\n\t**Now you can vote any person.**");
    printf("\n\tElection Parties are:\n\n\tModi\n\tAkhilesh\n\tArvind\n\tYogi");
    
    }
    
    else{
        printf("\n\tOTP is incorrect..Try again or Refresh!!\n");
        check();
        
    }
    
}
void check()
{   int yes;
    printf("\n\tEnter\n\t1 for Process Further\n\t2 For See Result\n");
    scanf("%d",&yes);
    switch(yes)
    {
        case 1:
        printf("\n\tNext Person Fill Mandatory Details\n");
           vote();
           votes();
        case 2:
             exit(0);
    }
}
void votes()
{
    int Modi,Akhilesh,Arvind,Yogi,name;
    printf("\n\tEnter:\n\t1 For Modi\n\t2 for Akhilesh\n\t2 for Arvind\n\t4 For Yogi\n\t5 For Exit\n");
    scanf("%d",&name);
    
    switch(name)
    {
        
    case 1:
    {    
         printf("\tWait,Your Vote is Being Updating...");
        Narendr_modi();
        printf("\n\tSuccesfully Voted\n");
      
       check();
        break;
    }
   case 2:
    {     printf("\tWait,Your Vote is Being Updating...");
        Akhilesh_yadav();
        
          printf("\n\tSuccesfully Voted\n");
        
          check();
          break;
    }
   case 3:
    {    printf("\tWait,Your Vote is Being Updating...");
        Arvind_kejriwal();
          printf("\n\tSuccesfully Voted\n");
          
           check();
           break;
          
    }
    case 4:
    {         printf("\tWait,Your Vote is Being Updating...");
           
           Yoginath();
             printf("\n\tSuccesfully Voted");
             
             check();
             break;
    }
    case 5:
     {
         exit(0);
     }
   default:
    {        
        printf("\n\tChoose Voters Name Appropriately\n");
    }
     
}
}

   
int main()
{  
   char nme[20];
   printf("\tEnter Your Name:");
   gets(nme);
   
   printf("\n\tHello %s\n",nme);
   while(1)
   {
    vote();
    votes();
   }
    
int save1,save2,save3,save4;
save1=Narendr_modi();
save2=Akhilesh_yadav();
save3=Arvind_kejriwal();
save4=Yoginath();


FILE *filePointer; 

filePointer = fopen("Bnk.txt", "w");
if(filePointer==NULL)
{
    fprintf(filePointer,"%s","File is Empty\n");
}
else
{
 
fprintf(filePointer, "%s %s %s", "*****Hello Voter*****\n", "\nVoters Result are Given Below:\n", "\nTotal Votes \n");
fprintf(filePointer, "%s %d","\n\tNarendra Modi:", save1);
fprintf(filePointer, "%s %d","\n\tAkhilesh Yadav:", save2);
fprintf(filePointer, "%s %d","\n\tArvind Kejriwal:", save3);
fprintf(filePointer, "%s %d","\n\tAditya Yoginath",save4);
 
fclose(filePointer);
}
  
return 0;
}