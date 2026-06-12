'''f = open("file2.txt", "a")
i = input("Enter: ")
f.write("\n" + i)
f.close()'''
f = open("file2.txt", "r")
line = f.readlines()
print(line[1])
