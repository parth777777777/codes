cet_students = {"Alice", "Bob", "Charlie", "David"}
jee_students = {"Bob", "Eve", "Frank", "Charlie"}
neet_students = {"Alice", "Eve", "Grace", "Harry"}

while True:
    print("\nStudent Enrollment Management")
    print("1. Union (All unique students)")
    print("2. Intersection (Students enrolled in all exams)")
    print("3. Difference (Students in one exam but not another)")
    print("4. View All Enrollments")
    print("5. Exit")
    
    choice = input("Choose an option: ")

    match choice: 
        case "1":
            all_students = cet_students | jee_students | neet_students
            print(f"\nAll unique students (Union): \n{all_students}")
        case "2":
            common_students = cet_students & jee_students & neet_students
            if len(common_students) == 0:
                print("No students are appearing for all three exams !")
            else:
                print(f"Students appearing for all exams (intersection): \n{common_students}")
        case "3":
            print("\nChoose Difference Option:")
            print("a. CET but not JEE")
            print("b. JEE but not CET")
            print("c. CET but not NEET")
            print("d. NEET but not CET")
            print("e. JEE but not NEET")
            print("f. NEET but not JEE")
            diff_choice = input("Choose an option: ")
            match diff_choice:
                case "a":
                    print("\nCET but not JEE")
                    print(cet_students - jee_students)
                case "b":
                    print("\nJEE but not CET")
                    print(jee_students - cet_students)
                case "c":
                    print("\nCET but not NEET")
                    print(cet_students - neet_students)
                case "d":
                    print("\nNEET but not CET")
                    print(neet_students-cet_students)
                case "e":
                    print("\nJEE but not NEET")
                    print(jee_students- neet_students)
                case "f":
                    print("\nNEET but not JEE")
                    print(neet_students - jee_students)
                case _: 
                    print("Invalid input!")
        case "4":
            print("\nEnrollments: ")
            print("CET : ", cet_students)
            print("JEE : ",jee_students)
            print("NEET : ",neet_students)
        case "5":
            print("Quitting..")
            break
        case _:
            print("Invalid input!")