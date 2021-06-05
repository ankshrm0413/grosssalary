#include<stdio.h>
int main()
{
	float bs, gs, da, hra;
	printf("Enter basic salary (In Rs.):");
	scanf("%f", &bs);
	if (bs<1500)
		{
			hra = bs * 10 / 100;
			da = bs * 90 / 100;
		}
	else
		{
			hra = 500;
			da = bs * 98 / 100;
		}
	gs = bs + hra + da;
	printf("You Entered Basic Salary = %f \n", bs);
	printf("HRA = %f \n", hra);
	printf("DA = %f \n", da);
	printf("Gross salary = %f", gs);
	return 0;
}

        if(l>=4*d && l<=(c+d)*4)

        {

          printf("yes\n");

        }

        else

        {

          printf("no");

        }

      }

      else if(c>2*d)

      {

        if(l>=(d+c-2*d) && l<=4*(c+d))

        {

          printf("yes\n");

        }

        else

        {

          printf("no\n");

        }

      }

    }

    else

    {

      printf("no\n");

    }

  }

  return 0;

}
