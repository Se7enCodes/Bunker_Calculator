#include <stdio.h>

int main()
{
    int branch;     //for branch
    int grp_num;    //for group number in labs (1 or 2)
    
    printf("\nEnter 0 for CSE;\nEnter 1 for AI/ML;\nEnter 2 for EEE;\nEnter 3 for ECE;\nEnter 4 for CE & ME;\n\n");
    scanf("%d", &branch);

    if (branch == 1) 
// FOR AI/ML BRANCH
    {
        printf("\nEnter your group number (1 or 2) for labs (applicable for PH Labs and EE Labs only):\n");
        scanf("%d", &grp_num);
        
        if (grp_num == 1)
        {
            printf("\n You can bunk 8 classes of PPS for there are total 35 classes in second semester \n\n You can bunk 9 classes of PH for there are total 39 classes in second semester \n\n You can bunk 9 classes of MA for there are total 39 classes in second semester \n\n You can bunk 7 classes of EE for there are total 31 classes in second semester \n\n You can bunk 5 classes of BSC for there are total 22 classes in second semester \n\n You can bunk 2 classes of Communication Skills for there are total 10 classes in second semester \n\n You can bunk 3 classes of PPS Lab for there are total 12 classes in second semester \n\n You can bunk 2 classes of PH Lab for there are total 9 classes in second semester \n\n You can bunk 2 classes of EE Lab for there are total 10 classes in second semester \n\n You can bunk 2 classes of NSS (or) PT/Games for there are total 10 classes in second semester \n\n ");
        }
        else if (grp_num == 2)
        {
            printf("\n You can bunk 8 classes of PPS for there are total 35 classes in second semester \n\n You can bunk 9 classes of PH for there are total 39 classes in second semester \n\n You can bunk 9 classes of MA for there are total 39 classes in second semester \n\n You can bunk 7 classes of EE for there are total 31 classes in second semester \n\n You can bunk 5 classes of BSC for there are total 22 classes in second semester \n\n You can bunk 2 classes of Communication Skills for there are total 10 classes in second semester \n\n You can bunk 3 classes of PPS Lab for there are total 12 classes in second semester \n\n You can bunk 2 classes of PH Lab for there are total 10 classes in second semester \n\n You can bunk 2 classes of EE Lab for there are total 9 classes in second semester \n\n You can bunk 2 classes of NSS (or) PT/Games for there are total 10 classes in second semester \n\n ");
        }
        else if (grp_num != 1 && grp_num != 2)
        {
            printf("\nInvalid input for group number, restart program again.");
        }
    }

    else if (branch == 2)
// FOR EEE BRANCH
    {
        printf("If lab sessions for all students are conducted collectively, i.e., there is no division of students into groups (1 or 2), then enter 1.\nOtherwise, enter your group number (1 or 2) for labs: \n");
        scanf("%d", &grp_num);

        if (grp_num == 1)
        {
            printf("\n You can bunk 9 classes of PPS for there are total 38 classes in second semester \n\n You can bunk 10 classes of PH for there are total 40 classes in second semester \n\n You can bunk 10 classes of MA for there are total 42 classes in second semester \n\n You can bunk 7 classes of EE for there are total 30 classes in second semester \n\n You can bunk 5 classes of BSC for there are total 22 classes in second semester \n\n You can bunk 2 classes of Communication Skills for there are total 9 classes in second semester \n\n You can bunk 2 classes of PPS Lab for there are total 9 classes in second semester \n\n You can bunk 2 classes of PH Lab for there are total 10 classes in second semester \n\n You can bunk 2 classes of EE Lab for there are total 9 classes in second semester \n\n You can bunk 2 classes of NSS (or) PT/Games for there are total 10 classes in second semester \n\n ");
        }
        else if (grp_num == 2)
        {
            printf("\n You can bunk 9 classes of PPS for there are total 38 classes in second semester \n\n You can bunk 10 classes of PH for there are total 40 classes in second semester \n\n You can bunk 10 classes of MA for there are total 42 classes in second semester \n\n You can bunk 7 classes of EE for there are total 30 classes in second semester \n\n You can bunk 5 classes of BSC for there are total 22 classes in second semester \n\n You can bunk 2 classes of Communication Skills for there are total 9 classes in second semester \n\n You can bunk 2 classes of PPS Lab for there are total 9 classes in second semester \n\n You can bunk 2 classes of PH Lab for there are total 9 classes in second semester \n\n You can bunk 2 classes of EE Lab for there are total 10 classes in second semester \n\n You can bunk 2 classes of NSS (or) PT/Games for there are total 10 classes in second semester \n\n ");
        }
        else if (grp_num != 1 && grp_num != 2)
        {
            printf("\nInvalid input for group number, restart program again.");
        }
    }

    else if (branch == 3)
/// FOR ECE BRANCH
    {
        printf("\nEnter your group number (1 or 2) for labs (applicable for PH Labs and EE Labs only):\n");
        scanf("%d", &grp_num);

        if (grp_num == 1)
        {
            printf("\n You can bunk 10 classes of PPS for there are total 43 classes in second semester \n\n You can bunk 9 classes of PH for there are total 39 classes in second semester \n\n You can bunk 9 classes of MA for there are total 39 classes in second semester \n\n You can bunk 6 classes of EE for there are total 27 classes in second semester \n\n You can bunk 5 classes of BSC for there are total 22 classes in second semester \n\n You can bunk 2 classes of Communication Skills for there are total 10 classes in second semester \n\n You can bunk 2 classes of PPS Lab for there are total 9 classes in second semester \n\n You can bunk 2 classes of PH Lab for there are total 8 classes in second semester \n\n You can bunk 2 classes of EE Lab for there are total 10 classes in second semester \n\n You can bunk 2 classes of NSS (or) PT/Games for there are total 10 classes in second semester \n\n ");
        }
        else if (grp_num == 2)
        {
            printf("\n You can bunk 10 classes of PPS for there are total 43 classes in second semester \n\n You can bunk 9 classes of PH for there are total 39 classes in second semester \n\n You can bunk 9 classes of MA for there are total 39 classes in second semester \n\n You can bunk 6 classes of EE for there are total 27 classes in second semester \n\n You can bunk 5 classes of BSC for there are total 22 classes in second semester \n\n You can bunk 2 classes of Communication Skills for there are total 10 classes in second semester \n\n You can bunk 2 classes of PPS Lab for there are total 9 classes in second semester \n\n You can bunk 2 classes of PH Lab for there are total 10 classes in second semester \n\n You can bunk 2 classes of EE Lab for there are total 8 classes in second semester \n\n You can bunk 2 classes of NSS (or) PT/Games for there are total 10 classes in second semester \n\n ");
        }
        else if (grp_num != 1 && grp_num != 2)
        {
            printf("\nInvalid input for group number, restart program again.");
        } 
    }

    else if (branch == 0)
// FOR CSE BRANCH
    {
        printf("\nEnter your group number (1 or 2) for labs (applicable for PH Labs and EE Labs only):\n");
        scanf("%d", &grp_num);
        
        if (grp_num == 1)
        {
            printf("\n You can bunk 9 classes of PPS for there are total 39 classes in second semester \n\n You can bunk 9 classes of PH for there are total 39 classes in second semester \n\n You can bunk 9 classes of MA for there are total 39 classes in second semester \n\n You can bunk 6 classes of EE for there are total 27 classes in second semester \n\n You can bunk 5 classes of BSC for there are total 22 classes in second semester \n\n You can bunk 2 classes of Communication Skills for there are total 9 classes in second semester \n\n You can bunk 2 classes of PPS Lab for there are total 8 classes in second semester \n\n You can bunk 3 classes of PH Lab for there are total 12 classes in second semester \n\n You can bunk 2 classes of EE Lab for there are total 10 classes in second semester \n\n You can bunk 2 classes of NSS (or) PT/Games for there are total 10 classes in second semester \n\n ");
        }
        else if (grp_num == 2)
        {
            printf("\n You can bunk 9 classes of PPS for there are total 39 classes in second semester \n\n You can bunk 9 classes of PH for there are total 39 classes in second semester \n\n You can bunk 9 classes of MA for there are total 39 classes in second semester \n\n You can bunk 6 classes of EE for there are total 27 classes in second semester \n\n You can bunk 5 classes of BSC for there are total 22 classes in second semester \n\n You can bunk 2 classes of Communication Skills for there are total 9 classes in second semester \n\n You can bunk 2 classes of PPS Lab for there are total 8 classes in second semester \n\n You can bunk 2 classes of PH Lab for there are total 10 classes in second semester \n\n You can bunk 3 classes of EE Lab for there are total 12 classes in second semester \n\n You can bunk 2 classes of NSS (or) PT/Games for there are total 10 classes in second semester \n\n ");
        }
        else if (grp_num != 1 && grp_num != 2)
        {
            printf("\nInvalid input for group number, restart program again.");
        }
    }

    else if (branch == 4)
// FOR CE & ME BRANCHES
    {
        printf("\n You can bunk 9 classes of MA for there are total 37 classes in second semester \n\n\n You can bunk 9 classes of CH for there are total 37 classes in second semester \n\n You can bunk 6 classes of EC for there are total 27 classes in second semester \n\n You can bunk 7 classes of ME for there are total 28 classes in second semester \n\n You can bunk 5 classes of EVS for there are total 22 classes in second semester \n\n You can bunk 2 classes of EG for there are total 8 classes in second semester \n\n You can bunk 3 classes of CH Lab for there are total 12 classes in second semester \n\n You can bunk 2 classes of EC Lab for there are total 10 classes in second semester \n\n You can bunk 2 classes of Workshop Practice for there are total 9 classes in second semester \n\n You can bunk 2 classes of NSS (or) PT/Games for there are total 10 classes in second semester \n");
    }

    else
    {
        printf("Invalid input. Restart program again.");
    }

    return 0;
}