#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int chem_marks, maths_marks, phy_marks;
};

int main() {
    struct Student students[5];
    int i;


    for (i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &students[i].roll_no);
        printf("Name => ");
        scanf("%s", students[i].name);
        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);
        printf("\n");
    }


    for (i = 0; i < 5; i++) {
        int total = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = (float)total / 300 * 100;

        printf("%s (%d) \nMathematics => %d \nChemistry => %d \nPhysics => %d \nTotal => %d/300 \nPercent => %.2f%%\n\n------------------------------------------------------------------------------------------------\n",
               students[i].name, students[i].roll_no,
               students[i].maths_marks, students[i].chem_marks, students[i].phy_marks,
               total, percentage);
    }

    return 0;
}