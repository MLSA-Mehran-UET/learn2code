import tkinter as tk
from tkinter import ttk

window = tk.Tk()
window.title('Create widgets using Loop')

labels = ['Name: ', 'Age: ', 'Gender: ', 'State: ', 'City: ', 'Country: ']

for i in range(len(labels)):
    label = ttk.Label(window, text=labels[i])
    label.grid(row=i, column=0, sticky=tk.W)

user_info = {
    'name': tk.StringVar(),
    'age': tk.StringVar(),
    'gender': tk.StringVar() ,
    'state': tk.StringVar(),
    'city': tk.StringVar(),
    'country': tk.StringVar(),
}

counter=0
for key in user_info:
    entry_box = ttk.Entry(window, width=16, textvariable=user_info[key])
    entry_box.grid(row=counter, column=1)
    counter+=1

def submit_action():
    for key, value in user_info.items():
        print(f'{key} : {value.get()}')

submit_btn = ttk.Button(window, text='Submit', command=submit_action)
submit_btn.grid(row=6, columnspan=2)

window.mainloop()
