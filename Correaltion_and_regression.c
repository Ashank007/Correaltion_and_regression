#include <stdio.h>
#include <stdlib.h>
double squareroot(double number) {
    double guess = number / 2.0;
    double epsilon = 0.000001; 
    while ((guess * guess - number) > epsilon || (number - guess * guess) > epsilon) {
        guess = (guess + number / guess) / 2.0;
    }
    return guess;
}
double Karls_Pearson_Cofficent()
{
    int x_size,y_size;
    printf("Enter the Size of X elements :- ");
    scanf("%d",&x_size);
    printf("Enter the Size of Y elements :- ");
    scanf("%d",&y_size);
    int x_array[x_size],y_array[y_size];
    printf("Enter the elements of X :- ");
    for(int i=0;i<x_size;i++)
    {
        scanf("%d",&x_array[i]);
    }
    printf("Enter the elements of Y :- ");
    for(int i=0;i<y_size;i++)
    {
        scanf("%d",&y_array[i]);
    }
    int x_sum=0,y_sum=0;
    for(int i=0;i<x_size;i++)
    {
        x_sum += x_array[i];

    }
    for(int i=0;i<y_size;i++)
    {
        y_sum += y_array[i];
    }
    int x_mean,y_mean;
    x_mean = x_sum/x_size;
    y_mean = y_sum/y_size;
    int x_array_after_subtracting_mean[x_size], y_array_after_subtracting_mean[y_size];
    for(int i=0;i<x_size;i++)
    {
        x_array_after_subtracting_mean[i] = x_array[i]-x_mean;
    }
        for(int i=0;i<y_size;i++)
    {
        y_array_after_subtracting_mean[i] = y_array[i]-y_mean;
    }
    int array_x_multiply_y[x_size];
    for(int i=0;i<x_size;i++)
    {
        array_x_multiply_y[i] = x_array_after_subtracting_mean[i]*y_array_after_subtracting_mean[i];
    }
    int sum_mutplication_xmean_ymean=0;
    for(int i=0;i<x_size;i++)
    {
        sum_mutplication_xmean_ymean += array_x_multiply_y[i];
    }
    int x_array_square_after_subtracting_mean[x_size],y_array_square_after_subtracting_mean[y_size];
    for(int i=0;i<x_size;i++)
    {
        x_array_square_after_subtracting_mean[i] = x_array_after_subtracting_mean[i]*x_array_after_subtracting_mean[i];
    }
    for(int i=0;i<y_size;i++)
    {
        y_array_square_after_subtracting_mean[i] = y_array_after_subtracting_mean[i]*y_array_after_subtracting_mean[i];
    }
    int sum_square_xmean=0,sum_square_ymean=0;
    for(int i=0;i<x_size;i++)
    {
        sum_square_xmean += x_array_square_after_subtracting_mean[i];
    }
    for(int i=0;i<y_size;i++)
    {
        sum_square_ymean += y_array_square_after_subtracting_mean[i];
    }
    double sum_square_xymean = 1;
    sum_square_xymean = sum_square_xmean*sum_square_ymean;
    double squareroot_sum_square_xymean;
    squareroot_sum_square_xymean = squareroot(sum_square_xymean);
    double ans = sum_mutplication_xmean_ymean/squareroot_sum_square_xymean;
    return ans;
}
int main()
{
    printf("%.2lf",Karls_Pearson_Cofficent());
    return 0;
}