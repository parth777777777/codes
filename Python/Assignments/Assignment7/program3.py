import numpy as np

data = np.array([10, 20, 30, 40, 50, 60])
# Mean (Average)
mean_value = np.mean(data)
print("\nMean:", mean_value)
# Median
median_value = np.median(data)
print("Median:", median_value)
# Standard Deviation
std_dev = np.std(data)
print("Standard Deviation:", std_dev)
# Variance
variance = np.var(data)
print("Variance:", variance)
# Correlation measures the relationship between two datasets.
data1 = np.array([10, 20, 30, 40, 50])
data2 = np.array([5, 15, 25, 35, 45])
correlation_matrix = np.corrcoef(data1, data2)
print("\nCorrelation Coefficient Matrix:\n", correlation_matrix)

