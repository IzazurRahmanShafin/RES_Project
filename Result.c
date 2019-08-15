///             Bismillahir Rahmanir Rahim...
///             Coded by IZAZUR RAHMAN SHAFIN.
///             Dept. of CSE, DCC.

#include<stdio.h>
#define fr(n) for (i=0; i<n; i++)
#define fr2(n) for (j=0; j<n; j++)
#define fr3(n) for (j=1; j<=n; j++)

float s1[100], s2[100], s3[100], s4[100], s5[100], s6[100], ts1[100], ts2[100];
int sub1[100], sub2[100], sub3[100], sub4[100], sub5[100], sub6[100], sub7[100];

void entry (int A[], int i){
    printf("\tRoll %d: ", i+1);
    scanf("%d", &A[i]);
}

void gpa (int A[], float B[], int i){
    if (A[i]>=80)
        B[i]=5.00;
    else if(A[i]>=70 && A[i]<=79)
        B[i]=4.00;
    else if(A[i]>=60 && A[i]<=69)
        B[i]=3.50;
    else if(A[i]>=50 && A[i]<=59)
        B[i]=3.00;
    else if(A[i]>=40 && A[i]<=49)
        B[i]=2.00;
    else if(A[i]>=33 && A[i]<=39)
        B[i]=1.00;
    else
        B[i]=0.00;
}

int main(){
    char decision;
    int i, j, k, r, n, swap;
    int total1[100], total2[100], total3[100], total4[100], total5[100];
    printf("\n\t\t\t\tBismillahir Rahmanir Rahim...\n\t\t\t\tCoded & Developed by Izazur Rahman Shafin\n\t\t\t\tDept. of CSE\n\t\t\t\tDhaka City College.\n\n\n");
    printf("\tNumber of Students: ");

    while (scanf("%d", &n)!=EOF){
        printf("\n\t\t\t...Submit Marks...\n");

        printf("\n\tBangla:\n\n");                  fr(n) entry(sub1, i);
        printf("\n\tEnglish:\n\n");                 fr(n) entry(sub2, i);
        printf("\n\tMathematics:\n\n");             fr(n) entry(sub3, i);
        printf("\n\tPrimary Science:\n\n");         fr(n) entry(sub4, i);
        printf("\n\tBangladesh Studies:\n\n");      fr(n) entry(sub5, i);
        printf("\n\tReligion:\n\n");                fr(n) entry(sub6, i);

        printf("\n");

        fr(n)   total1[i]=sub1[i]+sub2[i]+sub3[i]+sub4[i]+sub5[i]+sub6[i];

        fr(n)   total3[i]=total1[i];

        fr3(n) {
            for (k=0; k<=n-j-1; k++){
                if (total3[k] < total3[k+1]){
                    swap=total3[k+1];
                    total3[k+1]=total3[k];
                    total3[k]=swap;
                }
            }
        }

        /// Binary Search to be needed.....

        fr(n) {
            fr2(n) {
                if (total1[i]==total3[j]){
                    total5[i]=j+1;
                    break;
                }
            }
        }

        fr(n)   gpa(sub1, s1, i);
        fr(n)   gpa(sub2, s2, i);
        fr(n)   gpa(sub3, s3, i);
        fr(n)   gpa(sub4, s4, i);
        fr(n)   gpa(sub5, s5, i);
        fr(n)   gpa(sub6, s6, i);

        fr(n) {
            if(s1[i]==0.00 || s2[i]==0.00 || s3[i]==0.00 || s4[i]==0.00 || s5[i]==0.00 || s6[i]==0.00)
                ts1[i]==0.00;
            else
                ts1[i]=(s1[i]+s2[i]+s3[i]+s4[i]+s5[i]+s6[i])/6.00;
        }

        printf("\n\n\t\tRESULT\n\t.....................\n\n\n");

        fr(n) {
            if (ts1[i]==5.00)
                printf("\tRoll %d:\n\n\tTotal: %d\n\tGPA: %.2f\n\tGrade: A+\n\tPosition: %d\n\n", i+1, total1[i], ts1[i],  total5[i]);
            else if(ts1[i]>=4.00 && ts1[i]<=4.99)
                printf("\tRoll %d:\n\n\tTotal: %d\n\tGPA: %.2f\n\tGrade: A\n\tPosition: %d\n\n", i+1, total1[i], ts1[i],  total5[i]);
            else if(ts1[i]>=3.50 && ts1[i]<=3.99)
                printf("\tRoll %d:\n\n\tTotal: %d\n\tGPA: %.2f\n\tGrade: A-\n\tPosition: %d\n\n", i+1, total1[i], ts1[i],  total5[i]);
            else if(ts1[i]>=3.00 && ts1[i]<=3.49)
                printf("\tRoll %d:\n\n\tTotal: %d\n\tGPA: %.2f\n\tGrade: B\n\tPosition: %d\n\n", i+1, total1[i], ts1[i],  total5[i]);
            else if(ts1[i]>=2.00 && ts1[i]<=2.99)
                printf("\tRoll %d:\n\n\tTotal: %d\n\tGPA: %.2f\n\tGrade: C\n\tPosition: %d\n\n", i+1, total1[i], ts1[i],  total5[i]);
            else if(ts1[i]>=1.00 && ts1[i]<=1.99)
                printf("\tRoll %d:\n\n\tTotal: %d\n\tGPA: %.2f\n\tGrade: D\n\tPosition: %d\n\n", i+1, total1[i], ts1[i],  total5[i]);
            else
                printf("\tRoll %d:\n\n\tTotal: %d\n\tGPA: %.2f\n\tGrade: F\n\tPosition: %d\n\n", i+1, total1[i], ts1[i], total5[i]);
        }

        printf("\n\tWork Again? if yes press A otherwise S : ");
        scanf("\n%c", &decision);
        if (decision == 'A') printf("\n\n\tNumber of Students: ");
        else break;
    }
    return 0;
}
