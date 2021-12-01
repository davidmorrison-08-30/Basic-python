#SCRAPING DATA FROM https://www.worldometers.info/coronavirus/ USING REQUESTS AND BEAUTIFULSOUP 
from bs4 import BeautifulSoup
import requests
from datetime import datetime #WHEN THE NUMBER IS RECORDED

url = requests.get("https://www.worldometers.info/coronavirus/")
parse = url.content #GET THE CONTENT
soup = BeautifulSoup(parse,"html.parser")

for i in soup.find_all({"div":"span"}): 
    #*BY INSPECTING THE WEBSITE, I FIND THE NUMBER IN A <DIV><SPAN> TAG
    #*FINDING SOME SMALL CHARACTERISTICS, SUCH AS THE LENGTH OF THE TEXT
    if "Deaths:\n\n" in i.text and len(i.text) == 19:
        print("At the moment, there are",i.text[10:17],"Covid-19 deaths.")
        #FINALLY, SAVE IT TO A FILE
        with open("COVID DEATHS.txt","a") as file:
            file.write(str(datetime.now()) + 2*"\t" + i.text[10:17] + " deaths")
