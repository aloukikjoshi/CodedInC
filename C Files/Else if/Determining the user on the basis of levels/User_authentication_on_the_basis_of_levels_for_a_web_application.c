#include <stdio.h>

int main(){
    int level;
    printf("Enter the level: ");
    scanf("%d",&level);
    if(level==1)
    {printf("You are an admin.\n");
    //allow access to all pages
    }
    else if(level==2)
    {printf("You are a moderator.\n");
    //allow access to certain pages
    }
    else
    {printf("You are a guest.\n");
    //give access to limited pages only
    }
}
