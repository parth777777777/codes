import tkinter as tk

root = tk.Tk()
root.title("Basic Calculator")
root.geometry("400x500")

display = tk.Entry(root, width= 20 , font=("Arial",24), bd= 4, relief  = "sunken", justify= "right")
display.grid(row=0, column=0, columnspan=4, sticky="nsew" ,padx=10, pady=10 )

def button_click(value):
    current = display.get()
    display.delete(0, tk.END)
    display.insert(tk.END, current+value)
    
def calculate():
    try:
        result= eval(display.get())
        display.delete(0,tk.END)
        display.insert(tk.END, str(result))
    except Exception as e :
        display.delete(0,tk.END)
        display.insert(tk.END, "Error")

def clear():
    display.delete(0,tk.END)
    
   
buttons = [
    ('7', 1, 0), ('8', 1, 1), ('9', 1, 2), ('/', 1, 3),
    ('4', 2, 0), ('5', 2, 1), ('6', 2, 2), ('*', 2, 3),
    ('1', 3, 0), ('2', 3, 1), ('3', 3, 2), ('-', 3, 3),
    ('0', 4, 0), ('.', 4, 1), ('+', 4, 2), ('=', 4, 3),
    ('C', 5, 0)
]     

for (text, row , col) in buttons:
    if text== "=":
        tk.Button(root, text = text , width=5 , height=2 , font = ("Arial", 18), command=calculate).grid(row= row, column=col, sticky="nsew",padx=7, pady=7)
    
    elif text == "C":
        tk.Button(root, text = text , width = 5 , height=2 , font =("Arial",18), command= clear).grid(row=row, column=col, sticky="nsew",padx=7, pady=7)
    
    else:
        tk.Button(root, text = text , width = 5 , height = 2, font =("Arial",18), command=lambda value=text: button_click(value)).grid(row=row, column=col,padx=7, pady=7, sticky="nsew")
        
for i in range(4):
    root.grid_columnconfigure(i,weight=1) 

for i in range(6):  # There are 6 rows (from 0 to 5)
    root.grid_rowconfigure(i, weight=1)

root.mainloop()