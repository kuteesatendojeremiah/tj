#include <stdio.h>
#include <stdlib.h>

int main(){


char name[50];
printf("ENTER YOUR NAME:");
scanf("%s",&name);



double phy_assign, phy_cw,phy_mid,phy_end;
double chem_assign,chem_cw,chem_mid,chem_end;
double math_assign, math_cw, math_mid, math_end;

printf("ENTER MARKS FOR PHYSICS(ASSIGNMENT,COURSEWORK,MIDTERM,ENDTERM)");
scanf("%lf %lf %lf %lf",&phy_assign,&phy_cw,&phy_mid,&phy_end);

    printf("ENTER MARKS FOR chemistry(ASSIGNMENT,COURSEWORK,MIDTERM,ENDTERM)");
scanf("%lf %lf %lf %lf",&chem_assign,&chem_cw,&chem_mid,&chem_end);

printf("ENTER MARKS FOR math(ASSIGNMENT,COURSEWORK,MIDTERM,ENDTERM)");
scanf("%lf %lf %lf %lf",&math_assign,&math_cw, &math_mid, &math_end);


double phy_avg = ( phy_assign+ phy_cw+phy_mid+phy_end)/4.0;
double chem_avg = (chem_assign,+chem_cw+chem_mid+chem_end)/4.0;
double math_avg = (math_assign+math_cw+ math_mid+math_end)/4.0;

printf("  AVERAGE MARKS are\n");
printf("physics: %.2lf\n",phy_avg);
printf("chemistry: %.2lf\n",chem_avg);
printf("math: %.2lf\n",math_avg);

return 0;
}
