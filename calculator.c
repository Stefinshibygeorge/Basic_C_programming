#include<stdio.h>
#include<math.h>

int main()
{
    float p,q;
    int opn;
    const pi = 3.141592;
    const e  = 2.718284;

    do
    {

label1:

        printf("\n \n \n Press 1  to Add\n Press 2  to Subtract\n Press 3  to Multiply \n Press 4  to Divide\n Press 5  to Square\n");
        printf(" Press 6  to Power\n Press 7  to Root\n");
        printf(" Press 8  to Trignometry\n Press 9  to Logorithm\n Press 10 to Factorial\n");
        printf("\n\n Press 0  to EXIT\n\n");
        scanf("%d",&opn);


        if (opn <= 4 && opn != 0)
        {

            printf("\n \nEnter any two numbers\n");
            scanf("\n%f %f",&p,&q);
            if (opn==1)
                printf("Sum is %.2f",p+q);
            if (opn==2)
                printf("Difference is %.2f",p-q);
            if (opn==3)
                printf("Product is %.3f",p*q);
            if (opn==4)
            {
                if(q!=0)
                {
                    float c = (float)p/q;
                    printf("Result is %f",c);
                }
                else
                    printf("The second number cannot be 0");
            }
        }


        else if (opn == 5||opn == 6||opn == 7||opn == 9)
        {

            printf("\nEnter a number\n");
            float base;
            scanf("%f",&base);

            if (opn == 5)
                printf("\nThe Square of %.4f is %.3f",base,base*base);

            else if(opn == 6)
            {
                printf("\nEnter your power\n");
                float power;
                scanf("%f",&power);
                float s = pow(base,power);
                printf("%f power %f is %.2f",base,power,s);
            }

            if (opn == 7)
            {
                printf("Enter your root .... n in n th root\n");
                float root;
                scanf("%f",&root);
                float t = pow(base,1/root);
                printf("\n\n%.2f th root of %.2f is %.2f",root,base,t);
            }

            if(opn == 9)
            {
                if(base >0)
                {
                    float logbase,l;
                    l = log(base);
                    printf("Natural log is %f",l);
                }
                else
                    printf("Log doesnot exist");
            }

        }

        if(opn == 8)
        {
            int ratio,type;
            printf("\n\n Press 1 : Radian mode\n Press 2 : Degree mode \n\n");
            scanf("%d",&type);

            if (type != 1 && type != 2 )
                goto label2;

            printf("\n Press 1 for sin \n Press 2 for cos \n Press 3 for tan");
            printf("\n Press 4 for cosec \n Press 5 for sec \n Press 6 for cot\n\n");
            scanf("%d",&ratio);
            printf("\n\nEnter the angle\n\n");
            float angle;
            scanf("%f",&angle);

            if (type == 2)
            {
                angle = (pi/180.0)*angle;
                printf("%f Radians\n\n",angle);
            }
            else if (type == 1)
                printf("%f Radians\n\n",angle);


            switch(ratio)
            {
            case 1:
                printf("sin(%f) = %.3f",angle,sin(angle));
                break;
            case 2 :
                printf("cos(%f) = %.3f",angle,cos(angle));
                break;
            case 3:
                printf("tan(%f) = %.3f",angle,tan(angle));
                break;
            case 4:
                printf("cosec(%f) = %.3f",angle,asin(angle));
                break;
            case 5:
                printf("sec(%f) = %.3f",angle,acos(angle));
                break;
            case 6 :
                printf("cot(%f) = %.3f",angle,atan(angle));
                break;
            default:
                printf("Enter as mentioned");
            }

        }

        if (opn == 10)
        {
            int num;
            printf("\nEnter a number\n");
            scanf("%d",&num);

            if(num >= 0)
            {
             
                int fact = 1;
                for(int i=1;i<=num;i++)
                
                    fact*=i;
                                  
                printf("\nThe factorial is %d\n",fact);
            }
            else
                printf("Factorial doesnot exist");
        }
        else if (opn > 10)
        {
label2:
            printf("Press a key as mentioned");
        }
        
        else if (opn == 0)
            break;

        printf("\n\n Press 1 to Continue \n Press 0 to Exit");
        int y;
        scanf("%d",&y);
        if(y==1)
            goto label1;
        else
            printf("\n \n \n \n  Thankyou¡¡¡\n \n\n");
        break;
    }

    while(opn != 0);


}

