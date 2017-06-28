# plot_gaussian_dist.py
# plot the data generated by file 'gaussian_distribution.c'

import matplotlib.pyplot as plt
import numpy as np

f = open(r'gaussian_data.txt', 'r').read()  # read file
data_string = f.split(",")   # split content of file on ','
data_list = []
for d in data_string:
    try:
        data_list.append(float(d))  # convert string-value to float and store in list
    except ValueError as error:
        continue   

# numpy array is required for calculating 'mean' and variance of distributions
data_array = np.array(data_list, 'float')  # convert python-list to numpy-array

print("Minimum value = ", min(data_array))  # show minimum value of data_array
print("Maximum value = ", max(data_array))  # show maximum value of data_array

# Calculate mean and variance
print("Mean = ", data_array.mean())  # mean
print("Variance = ", data_array.var())  # variance 

plt.hist(data_array, 20)  # Histogram with 20 bins
plt.show()

# Outputs: 
# Minimum value (a) =  -4.528262
# Maximum value (b) =  4.338116
# Mean =  0.00805113272
# Variance =  1.04446231254