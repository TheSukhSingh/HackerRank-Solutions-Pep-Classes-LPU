int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int sum = 0,i=0;
    for( i=(gender=='g'?1:0);i<number_of_students;i=i+2)
   {
    sum += *(marks+i);
   }
  
  return sum;
}