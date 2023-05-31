using namespace std;
// Write your code here.
int steel_grade(int hardness_of_steel, float carbon_content_of_steel, int
tensile_strength_of_steel)
{
 int grade;
 if (hardness_of_steel > 50)
 if (carbon_content_of_steel < 0.7)
 if (tensile_strength_of_steel > 5600)
 grade = 10;
 else
 grade = 9;
 else
 if (tensile_strength_of_steel > 5600)
 grade = 7;
 else
 grade = 6;
 else
 if (carbon_content_of_steel < 0.7)
 if (tensile_strength_of_steel > 5600)
 grade = 8;
 else
 grade = 6;
 else
 if (tensile_strength_of_steel > 5600)
 grade = 6;
 else
 grade = 5;
 return grade;
}
 
