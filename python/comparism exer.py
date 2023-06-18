name=input("enter your name ")
if len(name)<3:
    print("name must be at least 3 characters of 50 character")
elif len(name)>3:
    print("name must be maximun of 50 character")
else:
    print("name looks good")