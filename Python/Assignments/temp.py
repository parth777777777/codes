import numpy as np
import matplotlib.pyplot as plt

l = b = h = 1.0
area = 2*(l*b) + 2*(l*h) + 2*(b*h)
total_area = 0
x_values = []
y_values_area = []
y_values_cubes = []
y_values_total_area = []

for x in range(20):
    area = 2*(l*b) + 2*(l*h) + 2*(b*h)
    cubes = 2**x
    total_area = cubes * area
    print(f"After '{x}'th iteration , total surface area is : {total_area}")
    x_values.append(x)
    y_values_area.append(area)
    y_values_cubes.append(cubes)
    y_values_total_area.append(total_area)
    h = h / 2

# Plotting all three on the same graph
plt.plot(x_values, y_values_area, label='Surface Area of One Cube', color='b')
plt.plot(x_values, y_values_cubes, label='Number of Cubes', color='g')
plt.plot(x_values, y_values_total_area, label='Total Surface Area', color='r')

# Adding labels and title
plt.xlabel("Iterations")
plt.ylabel("Values")
plt.title("Growth of Surface Area, Cubes, and Total Surface Area")

# Adding a legend to distinguish the three plots
plt.legend()

# Adding grid for better readability
plt.grid(True)

# Show the plot
plt.show()
