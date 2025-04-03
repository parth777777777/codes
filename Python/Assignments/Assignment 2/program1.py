tasks = []
while True:
    print("\nTask Manager")
    print("1.Add Task")
    print("2.Remove Task")
    print("3.Update Task")
    print("4.Sort Tasks")
    print("5.View Tasks")
    print("6.Exit")
    choice = input("Choose an option: ")
    #match-case introduces in python 3.10
    match choice:
        case "1":
            task = input("Enter task :")
            tasks.append(task)
        case "2":
            task = input("Enter task to remove :")
            if task in tasks:
                tasks.remove(task)
            else: 
                print("Task not found!")
        case "3":
            index = int(input("Enter task number to update : ")) -1 
            if 0<= index < len(tasks):
                tasks[index] = input("Enter new task : ")
            else: 
                print("Invalid task number!")
        case "4":
            tasks.sort()
            print("Tasks have been sorted")
        case "5":
            print("\nTask List: ")
            for i, task in enumerate(tasks,1):
                print(f"{i}.{task}")
        case "6":
            print("Quitting..")
            break
        case _:
            print("Invalid Choice")