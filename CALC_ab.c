#include <stdio.h>
void main()
{
     system("color F1");
     printf("\n\n\n\n\n");
     int a;
     printf("                          * Dwse ena noumero a: ");
     scanf("%d",&a);
     printf("\n\n");
     int b;
     printf("                          * Dwse ena noumero b: ");
     scanf("%d",&b);
     printf("\n");
     
     int k;
     while (k!=0)
     {
     system("cls");
     printf("-------------------------------------------------------------------------------\n");
     printf("\n");
     printf("                                    a = %d\n",a);
     printf("                                    b = %d\n",b);
     printf("\n");
     printf("-------------------------------------------------------------------------------\n");
     printf("\n");
     printf("                       gia pros8esh ----------- pata 1 \n");
     printf("                       gia afairesh ----------- pata 2 \n");
     printf("                       gia pollaplasiasmo ----- pata 3 \n");
     printf("                       gia diairesh ----------- pata 4 \n");
     printf("                       gia TELOS -------------- pata 0 \n\n");
     printf("                                 Epilogh: ");
     scanf("%d",&k);
     printf("\n\n");
     
     float z;
     int l;
     if (k==1)
     {
           z=a+b;                             //pros8esh
     }
     else
     {
          if (k==2)
          {
                   z=a-b;                     //afairesh
          }
          else
          {
                    if (k==3)
                    {
                             z=a*b;           //pollaplasiasmos
                    }
                    else
                    {
                             if (k==4)        
                             {
                                      z=(float)a/b;  //diairesh
                                      l=a%b;  //upoleipo
                            }
                    }
          }
     }
     
         if ((k>=1)&&(k<4)) 
         {
                   printf("                            To apotelesma einai %.0f \n",z);
                   printf(" \n");
         }
         if (k==4) 
         {
                   printf("                                 Diairesh: %.2f \n",z);
                   printf("                            (Ypoleipo Diaireshs: %d) \n",l);
                   printf(" \n");
         }
         if ((k<=-1)||(k>=5))
         {
                   printf("                                LA8OS EPILOGH \n");
                   printf("\n");          
         }
         printf("-------------------------------------------------------------------------------\n");
         system("PAUSE");
     }
