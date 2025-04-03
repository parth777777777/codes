students = {}
grades = ( 'A+', 'B+', 'C+', 'D+', 'E+', 'F+','A', 'B', 'C', 'D', 'E', 'F' ) ##possible grades
while True:
    print("\nStudent Records Management")
    print("1. Add Student Record")
    print("2. Update Student Record")
    print("3. Delete Student Record")
    print("4. View All Student Records")
    print("5. Search Student Record")
    print("6. Exit")
    choice = input("Choose an option: ")

    match choice:
        case "1":
            #add new student record
            name = input("Enter student name : ")
            while True :
                grade = input("Enter grade : ")
                if grade.upper() not in grades:
                    print("Invalid grade , try again!")
                else:
                    break
            while True:
                attendance = int(input("Enter attendace % : "))
                if attendance not in range (0,101):
                    print("invalid attendance!")
                else:
                    break
            students[name] = {"grade": grade.upper(), "attendance": attendance}
            print(f"Record for {name} added succesfully! ")
        case "2":
            #update an existing record 
            name = input("Enter student name whose record is to be updated : ")
            if name in students:
                grade = input("Enter updated grade : ")
                attendance = input("Enter updated attendace % : ")
                students[name] = {"grade": grade, "attendance": attendance}
                print(f"Record for {name} updated succesfully!")
            else: 
                print("Student not found!") 
        case "3":
            #delete student record
            name = input("Enter student's name whose record is to be deleted : ")
            while True:
                choice = input(f"Are you sure you want to delete {name}'s record permanantly (Y/N) ?")
                if choice.lower() == "y":
                    del students[name]
                    print(f"Record for {name} deleted succesfully!")
                    break
                elif choice.lower() == "n":
                    print("Record deletion cancelled!")
                    break
                else:
                    print("Invalid input, Try again.")
        case "4":
            #View all student records
            if students:
                print("All student record: ")
                for name , info in students.items():
                    print(f"Name : {name} , grade : {info['grade']}, Attendance : {info['attendance']}%")
            else:
                print("No student records available!")
        case "5":
            #search for student record 
            name = input("Enter student name to search : ")
            if name in students :
                info = students[name]
                print(f"Name : {name} , grade : {info['grade']}, Attendance : {info['attendance']}%")
            else:
                print("Student not found!")
        case "6":
            print("Quitting..")
            break
        case _:
            print("Invalid choice , Try again !")
    print("\n---------------------------------------------")

