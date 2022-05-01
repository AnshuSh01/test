import pandas as pd
import datetime
import smtplib
import os
#os.chdir(r"C:\Users\ASUS\OneDrive\Documents\VSCodeQuickstart")
#os.mkdir("testing")

GMAIL_ID="anshush0609@gmail.com"
GMAIL_PSWD="anshusharma1234"

def sendEmail(to,sub,msg):

    print(f"Email to {to}  sent with subject: {sub} and message is {msg}")
    s=smtplib.SMTP("smtp.gmail.com",587)
    s.starttls()
    s.login(GMAIL_ID,GMAIL_PSWD)
    s.sendmail(GMAIL_ID,to,f"Subject : {sub}\n\n{msg}")

if __name__=="__main__":
    #sendEmail(GMAIL_ID,"I AM ANSHU DAROGA","Hello Boy")

    df=pd.read_excel("data.xlsx")
    #print(df)
    today=datetime.datetime.now().strftime("%d-%m")
    yearnow=datetime.datetime.now().strftime("%Y")
    print(today)
    #print(type(today))
    writeind=[]
    for index ,item in df.iterrows():
        #print(index,item["Birthday"])
        bday=item["Birthday"].strftime("%d-%m")
        #print(bday)

        if today==bday and yearnow  not in str(item["Year"]):
            sendEmail(item["Email"],"HELLO BOY",item["Dialogue"])
            #sendEmail(GMAIL_ID,"YES",item["Dialogue"])
            writeind.append(index)
    for i in writeind:
        yr=df.loc[i,"Year"]
        #print(yr)
        df.loc[i,"Year"]= str(yr) + "," + str(yearnow)
        #print(df.loc[i,"Year"])

    #print(df)
    df.to_excel("data.xlsx",index=False)

