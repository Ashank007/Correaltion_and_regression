# Karl Pearson Correlation Coefficient Calculation in C

This C program calculates the Karl Pearson correlation coefficient for two sets of numerical data. The Karl Pearson correlation coefficient is a measure of the linear correlation between two variables, X and Y. The value ranges from -1 to 1, where 1 indicates a perfect positive linear correlation, -1 indicates a perfect negative linear correlation, and 0 indicates no linear correlation.

# Features
Input Handling: The program prompts the user to input the sizes and elements of two data sets, X and Y.

Mean Calculation: It calculates the mean of both data sets.

Mean Subtraction: Subtracts the mean from each element in both data sets.

Product Calculation: Computes the product of the mean-subtracted elements for each pair of elements from X and Y.

Sum Calculation: Sums up the products of the mean-subtracted elements and the squares of the mean-subtracted elements.

Square Root Calculation: Utilizes a custom square root function to find the square root of the product of the sums of squared differences.

Correlation Coefficient Calculation: Computes the Karl Pearson correlation coefficient using the formula.

# Example
```bash
Enter the Size of X elements: 5
Enter the Size of Y elements: 5
Enter the elements of X: 1 2 3 4 5
Enter the elements of Y: 2 4 6 8 10
The Karl Pearson correlation coefficient is: 1.00
```
# Functions
double squareroot(double number): Computes the square root of a given number using the iterative method.

double Karls_Pearson_Cofficent(): Prompts the user for input, 
processes the data, and calculates the Karl Pearson correlation coefficient.

Please make sure to update tests as appropriate.

# Notes
Ensure that the sizes of the X and Y data sets are equal for accurate results.

The current implementation uses arrays of integers for simplicity.
