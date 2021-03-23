import json
import os.path
def displayAllBooks(books):
	print("")
	for current_book in books:
		for current_key in current_book:
			print(current_key, ":", current_book[current_key])


def getNumbericInput(displayString):
    while(True):
        user_data = input(displayString)
        if(user_data.isnumberic()):
            user_data = int(user_data)
            return user_data
        else:
            print("Please insert a number")

def addBook(): 
    book = {
        "title" : "",
        "num_of_pages" : 0,
        "language" : "",
        "author" : "",
        "publishing_year" : 0,
        "last_time_read" : {
                "day":0,
                "month": "",
                "year":0
                }
    },

        book["title"] = input("Please insert the title: ")
        book["num_of_pages"] = getNumericInput("Please insert the number of pages: ")
        book["language"] = input("Please insert the language: ")
        book["auther"] = input("Who is the auther: ")
        book["publication_year"] = getNumericInput("Please insert the year of publishing: ")
        last_time_read = input("When did you last read this? Please insert date with the following format: DD/MM/YY")
        last_time_read = last_time_read.split("/")
        book["last_time_read"]["day"] = last_time_read[0]
        book["last_time_read"]["day"] = last_time_read[1]
        book["last_time_read"]["day"] = last_time_read[2]
        while(True):
                chapter = input("Please insert a chapter to the book and insert End to finish adding chapter"
                if(chapter =="END"):
                else:
                        book["chapters"].append(chapter)
        return book
def loadExistingBooks():
    if( path.exists("books.json")):
       with open('books.json') as file_data:
                print(file_data)
                books = json.load(file_data)
                return books
     else:
             return[]
def saveToTheFile(books):
    f = open("books.json", "w")
    f.write(json.dumps(books, indent=2))
    f.close()

def main():
    books = []
  
    books = loadExistingBooks()

    while(True):
        insert_mode = input("Do you want to start adding books?, please answer yes or no")
        if(insert_mode == "no"):
            print("Goodbye")
            break
        else:
            book = addBook()
            books.append(book)

    saveToTheFile(books)
    displayAllBooks(books)

main()
