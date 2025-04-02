import numpy as np
array_1d = np.array([1, 2, 3, 4, 5]) # Create a 1D NumPy array
print("1D Array:")
print(array_1d)
print("\nIndexing and Slicing 1D Array:") # Indexing and slicing in 1D array
print("Element at index 2:", array_1d[2])
print("Slice from index 1 to 3:", array_1d[1:4])
array_2d = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]]) # Create a 2D NumPy array
print("\n2D Array:")
print(array_2d)
print("\nIndexing and Slicing 2D Array:") # Indexing and slicing in 2D array
print("Element at (1, 2):", array_2d[1, 2])
print("Slice from row 0 to 2 and column 1 to 2:")
print(array_2d[0:2, 1:3])
reshaped_2d = array_1d.reshape(1, 5) # Reshape the 1D array to 2D
print("\nReshaped 2D Array (1x5):")
print(reshaped_2d)
array_3d = np.array([[[1, 2], [3, 4]], [[5, 6], [7, 8]]]) # Create a 3D NumPy array
print("\n3D Array:")
print(array_3d)
print("\nIndexing and Slicing 3D Array:") # Indexing and slicing in 3D array
print("Element at (1, 0, 1):", array_3d[1, 0, 1])
print("Slice from 0th array, all rows, all columns:")
print(array_3d[0, :, :])
reshaped_3d = array_2d.reshape(1, 3, 2) # Reshape the 2D array to 3D
print("\nReshaped 3D Array:")
print(reshaped_3d)   


