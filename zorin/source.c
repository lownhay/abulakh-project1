#include <stdio.h>
#include <math.h>

int p, q;

double find_apq(double M1[4][5], int n)
{
	int i = 0, j = 0;
	double apq = 0;

	while (i < n)
	{
		j = 0;
		//printf("%d\t%d\n", i, j);
		while (j < n)
		{
			
			if (fabs(apq) < fabs(M1[i][j]))
			{
				//printf("%6.3f\n", fabs(M1[i][j]));
				apq = M1[i][j];
				p = i;
				q = j;
			}
			j++;
		}
		i++;
	}
	//printf("%6.3f\n", fabs(M1[0][0]));
	return (apq);
}

void maketab1(double M[4][4], double M1[4][5], double *V, int n)
{
	int k = 1;
	int i = 0, j = 0;;
	double apq, mi[n], rp[n][n + 1];

	while (k <= n)
	{
		i = 0;
		apq = find_apq(M1, n);
		printf("apq = %6.3f\n", apq);
		if (apq == 0)
			return ;
		while (i < n + 1)
		{
			rp[0][i] = M1[p][i];
			rp[k][i] = M1[p][i];
			//printf("%5.2f\t", rp[k][i]);
			// printf("\ni = %d\n", i);
			i++;
		}
		//printf("\n");
		for (i = 0; i < n; i = i + 1)
		{
			if (i == p)
				continue;
			mi[i] = M1[i][q] / apq;
		}
		j = 0;
		// while (j <= n)
		// {
		// 	rp[0][j] *= mi[k - 1];
		// 	j++;
		// }

		for(i = 0; i < n; i = i + 1)
		{
			j = 0;
			if (i == p)
				continue;
			while (j <= n)
			{
				rp[0][j] = rp[k][j];
				//printf("1%6.3f\t%6.3f\n", rp[0][0], mi[i]);
				rp[0][j] *= mi[i];
				j++;
			}
			//printf("2%6.3f\t%6.3f\n", rp[0][0], mi[i]);
			j = 0;
			while (j <= n)
			{
				M1[i][j] -= rp[0][j];
				// printf("M1 = %5.2f\t", M1[i][j]);
				// printf("rp = %5.2f\t", rp[0][j]);
				// printf("\n\n");
				j++;
			}
		}
		i = 0;
		while (i < n)
		{
			j = 0;
			if (i == p)
			{
				while (j <= n)
				{
					M1[i][j] *= 0;
					j++;
				}
			}
			M1[i][q] *= 0;
			i++;
		}
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j <= n)
			{
				printf("%5.2f\t", M1[i][j]);
				j++;
			}
			i++;
			printf("\n\n");
		}
		printf("\n\n");
		printf("\n\n");
		k++;
	}
	i = 1; 
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			printf("%5.2f\t", rp[i][j]);
			j++;
		}
		i++;
		printf("\n\n");
	}
}

int main(void)
{
	double M[4][4];
	double M1[4][5];
	double V[4];
	int i, j, n;

	i = 0;
	n = 4;
	M[0][0] = 9;
	M[0][1] = 11;
	M[0][2] = 11;
	M[0][3] = 12;
	M[1][0] = 12;
	M[1][1] = 24;
	M[1][2] = 2;
	M[1][3] = 9;
	M[2][0] = 20;
	M[2][1] = 4;
	M[2][2] = 41;
	M[2][3] = 16;
	M[3][0] = 7;
	M[3][1] = 13;
	M[3][2] = 9;
	M[3][3] = 3;
	V[0] = 214;
	V[1] = 186;
	V[2] = 470;
	V[3] = 140;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			M1[i][j] = M[i][j];
			j++;
		}
		i++;
	}
	M1[0][4] = V[0];
	M1[1][4] = V[1];
	M1[2][4] = V[2];
	M1[3][4] = V[3];
	i = 0;
	// while (i < 4)
	// {
	// 	j = 0;
	// 	while (j < 5)
	// 	{
	// 		printf("%5.1f\t", M1[i][j]);
	// 		j++;
	// 	}
	// 	i++;
	// 	printf("\n\n");
	// }
	maketab1(M, M1, V, n);
	return (0);
}