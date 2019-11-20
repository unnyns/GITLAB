#include <stdio.h>
void main()
{
  char Name[30][40] = {"Yanisa Treesak", "Pitchapa Sirirattanakul", "Ying Phakpon","Chai Chanchai", "Yong Boonsith", "Kitti Karndee"};
  int ID[30] = {3418, 3489, 5303, 5304, 5305, 5306};
  float GPA[30] = {4.00,4.00,4.00, 4.00, 4.00, 4.00};

  int N = 6, i;
  int SearchID, found_index; 
 
  printf("\nSTUDENT GPA LIST: \n"); 
  printf("ID----Name------------------------GPA\n"); 
  for (i=0;i<N; i++)
    printf("%5d %-25s %5.2f\n", ID[i], Name[i], GPA[i]); 
  printf("-------------------------------------\n");
  printf("Enter Student ID to Search (0 to End): "); 
  scanf("%d", &SearchID); 
  while (SearchID)
  {
      found_index = -1; 
      for (i = 0; i<N && found_index == -1; i++)

        if (SearchID == ID[i])

          found_index = i;

      if (found_index == -1)
        printf("Sorry, Student ID %5d not found.\n", SearchID);
      else 
        printf("ID: %5d. Name: %-25s. GPA: %5.2f.\n", 
           ID[found_index], Name[found_index],  GPA[found_index]);

      printf("Enter Student ID to Search (0 to End): ");

      scanf("%d", &SearchID);
  }
  printf("Bye Bye\n"); 
}
