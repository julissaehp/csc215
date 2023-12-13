#include <stdio.h>

int main() {
  //declared marks of 5 subject for 20 students    
  int MARKS[20][5]={{78,67,90,67,78},{78,89,90,80,78},{67,90,89,78,90},{69,40,89,88,67},{78,90,36,34,67},{56,45,89,34,90},{67,78,90,67,56},
                    {56,89,56,78,90},{67,90,34,23,89},{56,39,37,40,68},{90,99,78,89,67},{67,34,23,78,49},{37,70,34,23,39},{56,49,37,40,68},
                    {80,99,28,89,67},{47,34,23,78,49},{37,90,84,63,89},{56,99,37,40,98},{90,89,78,89,47},{77,34,93,98,29}};
  
  int i,j;
  float average_sub[5] = {0};
  float average_stu[20] = {0};
  int count = 0;

  //calculate average of each subject of all student
  for(j=0;j<5;j++){
    for(i=0;i<20;i++){
      average_sub[j] += (float)MARKS[j][i];
    }
  }

  //print average
  printf("\nAverage marks obtained in each subject : ");
  for(j=0;j<5;j++){
    average_sub[j] /= 20.0;

    printf("\nFor subject %d : %2.2f\n",j+1,average_sub[j]);
  }

  //calculate average of each student of all subject
  for(i=0;i<20;i++){
    for(j=0;j<5;j++){
      average_stu[i] += (float)MARKS[i][j];
    }
  }

  //print average
  printf("\nAverage marks obtained by every student : ");
  for(i=0;i<20;i++){
    average_stu[i] /= 5.0;

    if(average_stu[i] < 50)
      count++;

    printf("\nFor student %d : %2.2f\n",i+1,average_stu[i]);
  }

  //print number of student who have below 50 score 
  printf("\nNumber of students who have scored below 50 in their average : %d",count);

  //print score of 20 student 
  printf("\n\nScore of student : \n");
  for(i=0;i<20;i++){
    printf("Student %d : %d %d %d %d %d\n",i+1,MARKS[i][0],MARKS[i][1],MARKS[i][2],MARKS[i][3],MARKS[i][4]);
  }
  return 0;
}
