void main ()  
{  
    int n, sum, score;
    float average;
    sum = 0;
    n = 0;
    printf("\n Enter a test score(-99 to quit) :");
    scanf ("%d", &score);
    while (score != -99)
    {
        sum += score;
        n++;
        printf("\n Enter a test score (-99 to quit) :");
        scanf("%d", &score);
    }
    average = (float)sum /n;
    printf("\n The average is %f", average);
}
  
