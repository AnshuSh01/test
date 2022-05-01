import random

list=["Rock","Paper","Scissor"]
 
name=input("Enter Your name to Start the game:")
print("\n")

while True:
        print(f"Hello {name} Welcome to the Game , Let's Enjoy the Game\n")
        save=random.choice(list) #Generate the Random Machine Choice 
        inp=input("Enter Your Choice :\n=>Rock\n=>Scisssor\n=>Paper\n")

        if save=="Rock" and inp=="Rock":
            print(f"\nMachine toss is {save} and your toss is {inp}\n")
            print(f"Match Draw..\n")
            
        elif save=="Rock" and inp=="Scissor":
            print(f"\nMachine toss is {save} and your toss is {inp}\n")
            print(f"{name} You loose the Game.Better Luck Next time..\n")
           
             
        elif save=="Rock" and inp=="Paper":
            print(f"\nMachine toss is {save} and your toss is {inp}\n")
            print(f"{name} You loose the Game.Better Luck Next time..\n")
 
           
        elif save=="Scissor" and inp=="Rock":
            print(f"\nMachine toss is {save} and your toss is {inp}\n")
            print(f"Congratulation {name} You had win the Game..\n")
 
            
        elif save=="Paper" and inp=="Paper":
            print(f"\nMachine toss is {save} and your toss is {inp}\n")
            print(f"Match Draw..\n")
             
        elif save=="Scissor" and inp=="Paper":
            print(f"\nMachine toss is {save} and your toss is {inp}\n")
            print(f"{name} You loose the Game.Better Luck Next time..\n")
          
        elif save=="Paper" and inp=="Rock":
            print(f"\nMachine toss is {save} and your toss is {inp}\n")
            print(f"Congratulation {name} You had win the Game..\n")
 
            
        elif save=="Scissor" and inp=="Scissor":
            print(f"\nMachine toss is {save} and your toss is {inp}\n")
            print(f"Match Draw..\n") 
          
        elif save=="Paper" and inp=="Scissor":
            print(f"\nMachine toss is {save} and your toss is {inp}\n")
            print(f"Congratulation {name} You had win the Game..\n")
 
        else:
            print(f"\n{name} Please Enter the Valid Option/Choice\n ") 
           

