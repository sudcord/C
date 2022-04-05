void main(void)
{
 int x1 = 0, y1 = 0;
 int x2 = 0, y2 = 0;
 float uzaklık = 0 ;
 clrscr();
 printf("\n 1. konumu girin. ");
 scanf("%d %d",&x1,&y1);
 fflush(stdin);
 
 printf("\n 2. konumu girin. ");
 scanf("%d %d",&x2,&y2);
 fflush(stdin);
 
 uzaklık = sqrt( pow( (y2-y1),2) + pow((x2-x1),2) ) ;
 printf("\n mesafe ölçüldü yeğen : %.2f",uzaklık);
 
 getch();
}