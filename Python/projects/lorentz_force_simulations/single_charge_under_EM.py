import numpy as np
from mpl_toolkits import mplot3d
import matplotlib.pyplot as plt

fig = plt.figure(figsize=(12,8))
ax = plt.axes(projection ='3d')
    
q = 1.6E-19
m = 9.1E-31

# Sinusoidal magnetic field parameters
B_max = 15E-2  # Maximum magnetic field strength (Tesla)
omega = 2 * np.pi * 10  # Angular frequency

electric_field = np.array([-1E-1, 1E-1, 3E-1])   # V/m, aligned with y-axis

# Initial conditions with realistic velocity
# Electron beam velocity: ~10^6 m/s
velocity = np.array([0.0, 0.0, 0.0])  # m/s
position = np.array([0.0, 0.0, 0.0])  # starting at origin

# Simulation parameters
dt = 1E-10  # Time step (100 picoseconds)
t_end = 2E-5  # Total simulation time 

x_points = [position[0]]
y_points = [position[1]]
z_points = [position[2]]

t= 0
iterations=1

while t< t_end:

    magnetic_field = np.array([0.0, 0.0, B_max * np.sin(omega * t)])
    v_cross_b = np.cross(velocity,magnetic_field)
    lorentz_force = q * ( electric_field + v_cross_b )
    print(iterations)

    force_term = np.clip(lorentz_force/m, -1E20, 1E20)
    
    # Update velocity with numerical safeguards
    velocity_change = dt * force_term
    velocity = np.clip(velocity + velocity_change, -1E20, 1E20)
    
    position += dt * velocity

    x_points.append(position[0])
    y_points.append(position[1])
    z_points.append(position[2])

    t +=dt
    iterations+=1

ax.plot3D(x_points, y_points , z_points, 'green')
ax.set_title('Positron under the influence of a sinusoidal Magnetic field and a constant Electric field ')
ax.set_xlabel('X (m)')
ax.set_ylabel('Y (m)')
ax.set_zlabel('Z (m)')
ax.text2D(0.05, 0.95, f'Magnetic Field: {magnetic_field} T\n'
                       f'Electric Field: {electric_field} V/m', 
          transform=ax.transAxes)
print(f"Final position: {position} m")
print(f"Final velocity: {velocity} m/s")
plt.tight_layout()
plt.show()

