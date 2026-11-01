#include <stdio.h>

void addition(int n, int a[n][n], int b[n][n])
{
    // Sum
    printf("\n========================================\n");
    printf("    Sum of Matrix\n");
    int c[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%5d", c[i][j]);
        }
    
        printf("\n");
    }
    

}

void multiplication(int r, int p[r][r], int q[r][r])
{
    // Multiplication
    printf("\n========================================\n");
    printf("    Multiplication of Matrix\n");
    int s[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            s[i][j] = 0;
            for (int k = 0; k < r; k++)
            {
                s[i][j] += p[i][k] * q[k][j];
            }
            printf("%5d", s[i][j]);
        }
        printf("\n");
    }
    
}

void transpose(int m, int t[m][m])
{
    printf("\n========================================\n");
    printf("    Matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", t[i][j]);
        }
        printf("\n");
    }
    printf("\n========================================\n");
    printf("    Transpose of Matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", t[j][i]);
        }
        printf("\n");
    }
    
}
int main()
{

    int choice;
    do
    {

        printf("\n===== MATRIX OPERATIONS =====\n");
        printf("\n==============================\n");
        printf("    [1] Matrix Addition\n");
        printf("    [2] Matrix Multiplication\n");
        printf("    [3] Matrix Transpose\n");
        printf("    [4] Exit program");
        printf("\n==============================\n");
        printf("    Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input!\n");
            return 1;
        }

        switch (choice)
        {
        case 1:
        {
            int n;
            printf("\n========================================\n");
            printf("    Enter size of matrix for Addition : ");
            if (scanf("%d", &n) != 1)
            {
                printf("    Invalid input!\n");
                return 1;
            }
            if (n <= 0 || n > 100)
            {
                printf("    Invalid matrix size!\n");
                return 1;
            }
            
            int a[n][n], b[n][n];
            // For 1st matrix
            printf("========================================\n");
            printf("    Enter elements for 1st matrix \n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("    Enter element at [%d][%d] : ",i,j);
                
                    if (scanf("%d", &a[i][j]) != 1)
                    {
                        printf("    Invalid matrix element!\n");
                        return 1;
                    }
                }
                
            }
            printf("\n");
            
            printf("    First Matrix\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%5d", a[i][j]);
                }
                printf("\n");
            }
            printf("\n========================================\n");
            // For 2nd matrix
            printf("    Enter elements for 2nd matrix \n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("    Enter element at [%d][%d] : ", i, j);
                    if (scanf("%d", &b[i][j]) != 1)
                    {
                        printf("    Invalid matrix element!\n");
                        return 1;
                    }
                }
            }
            printf("\n");
            printf("    Second Matrix\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%5d", b[i][j]);
                }
                printf("\n");
            }
            addition(n, a, b);
            
            printf("\n========================================\n");
            break;

        }

        case 2:
        {
            int r;
            printf("\n========================================\n");
            printf("    Enter size of matrix for multiplication : ");
            if (scanf("%d", &r) != 1)
            {
                printf("    Invalid input!\n");
                return 1;
            }
            if (r <= 0 || r > 100)
            {
                printf("    Invalid matrix size!\n");
                return 1;
            }
            int p[r][r], q[r][r];
            // For 1st matrix
            printf("\n========================================\n");
            printf("    Enter elements for 1st matrix :\n");
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < r; j++)
                {
                    printf("    Enter element at [%d][%d] : ", i, j);
                    if (scanf("%d", &p[i][j]) != 1)
                    {
                        printf("    Invalid matrix element!\n");
                        return 1;
                    }
                }
            }
            printf("\n");
            printf("    First Matrix:\n");
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < r; j++)
                {
                    printf("%5d", p[i][j]);
                }
                printf("\n");
            }
            printf("\n========================================\n");

            // For 2nd matrix
            printf("    Enter elements for 2nd matrix :\n");
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < r; j++)
                {
                    printf("    Enter element at [%d][%d] : ", i, j);
                    if (scanf("%d", &q[i][j]) != 1)
                    {
                        printf("    Invalid matrix element!\n");
                        return 1;
                    }
                }
            }
            printf("\n");
            printf("    Second Matrix:\n");
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < r; j++)
                {
                    printf("%5d", q[i][j]);
                }
                printf("\n");
            }
            multiplication(r, p, q);
            
            printf("\n========================================\n");
            break;
        }

        case 3:
        {
            int m;
            printf("\n========================================\n");

            printf("    Enter size of matrix for transpose :");
            if (scanf("%d", &m) != 1)
            {
                printf("    Invalid input!\n");
                return 1;
            }
            if (m <= 0 || m > 100)
            {
                printf("    Invalid matrix size!\n");
                return 1;
            }
            int t[m][m];
            printf("    Enter elements of matrix \n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    printf("    Enter element at [%d][%d] : ",i, j);
                    if (scanf("%d", &t[i][j]) != 1)
                    {
                        printf("    Invalid matrix element!\n");
                        return 1;
                    }
                }
            }
            transpose(m, t);
            printf("\n========================================\n");
            break;
        }

        case 4:
            printf("\n========================================\n");
            printf("            Program ended!\n");
            printf("\n========================================\n");

            break;

        default:
            printf("\n========================================\n");
            printf("           Invalid choice!\n");
            printf("\n========================================\n");

        }
    } while (choice != 4);
    return 0;
}