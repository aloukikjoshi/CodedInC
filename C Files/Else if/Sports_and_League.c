#include <stdio.h>

int main()
{ 
    int sport, league;
    float x, y ,z, p, q, r;
    printf("Enter the sport (1-Cricket, 2-Football, 3-Basketball):");
    scanf("%d", &sport);
    printf("Enter the league(1-Ipl, 2-la liga, 3-NBA): ");
    scanf("%d", &league);
    
    if (league == sport)
    {
        if (sport == 1)
        {
            printf("Points Table: \n");
            x = 16;
            printf("MI:");
            printf("%f\n", x);
            y = 14;
            printf("CSK:");
            printf("%f\n", y);
            z = 18;
            printf("GT:");
            printf("%f\n", z);
            
            if (x > y && x > z)
            {
                printf("MI is the Table Topper.\n");
            }
            else if (y > x && y > z)
            {
                printf("CSK is the Table Topper.\n");
            }
            else 
            {
                printf("GT is the Table Topper.\n");
            }
            
            printf("Top Scorers:-");
            p = 632;
            printf("Virat Kohli: ");
            printf("%f\n", p);
            q = 530;
            printf("David Warner: ");
            printf("%f\n", q);
            r = 492;
            printf("Rohit Sharma: ");
            printf("%f\n", r);
            
            if (p > q && p > r) 
            {
                printf("Virat Kohli is the leading run scorer.\n");
            }
            else if (q > p && q > r)
            {
                printf("David Warner is the leading run scorer.\n");
            }
            else
            {
                printf("Rohit Sharma is the leading run scorer.\n");
            }
        }
        else if (sport == 2)
        {
            printf("Points Table: \n");
            x = 56;
            printf("FC Barcelona:");
            printf("%f\n", x);
            y = 45;
            printf("Real Madrid:");
            printf("%f\n", y);
            z = 42;
            printf("Real Sociedad:");
            printf("%f\n", z);
            
            if (x > y && x > z)
            {
                printf("FC Barcelona is the Table Topper.\n");
            }
            else if (y > x && y > z)
            {
                printf("Real Madrid is the Table Topper.\n");
            }
            else 
            {
                printf("Real Sociedad is the Table Topper.\n");
            }
            
            printf("Top Goalers:-");
            p = 13;
            printf("R. Lewandowski: ");
            printf("%f\n", p);
            q = 11;
            printf("Joselu: ");
            printf("%f\n", q);
            r = 9;
            printf("Karem Benzema: ");
            printf("%f\n", r);
            
            if (p > q && p > r)
            {
                printf("R. Lewandowski is the leading goal scorer.\n");
            }
            else if (q > p && q > r)
            {
                printf("Joselu is the leading goal scorer.\n");
            }
            else
            {
                printf("Karem Benzema is the leading goal scorer.\n");
            }
        }
        else if (sport == 3)
        {
            printf("PPG Table: \n");
            x = 117.6;
            printf("Boston:");
            printf("%f\n", x);
            y = 114.6;
            printf("Milwaukee:");
            printf("%f\n", y);
            z = 114.3;
            printf("Philadelphia:");
            printf("%f\n", z);
            
            if (x > y && x > z)
            {
                printf("Boston is the Table Topper.\n");
            }
            else if (y > x && y > z)
            {
                printf("Milwaukee is the Table Topper.\n");
            }
            else 
            {
                printf("Philadelphia is the Table Topper.\n");
            }
            
            printf("Top PPG Scorers:-");
            p = 33.2;
            printf("I. Doncic: ");
            printf("%f\n", p);
            q = 33.1;
            printf("J. Embiid: ");
            printf("%f\n", q);
            r = 32.4;
            printf("G. Antetokounmpo: ");
            printf("%f\n", r);
            
            if (p > q && p > r)
            {
                printf("I. Doncic is the leading pointer.\n");
            }
            else if (q > p && q > r)
            {
                printf("J. Embiid is the leading pointer.\n");
            }
            else
            {
                printf("G. Antetokounmpo is the leading pointer.\n");
            }
        }
    }
    if (league != sport)
    {
        printf("Invalid Match.");
    }
    return 0;
}