//  Structures (also called structs) are a way to group several related variables into one place.

// struct variable-name{

// };
// variable definition
struct student{
    int rollno;
    char name[];
    char gender;
    float percentage;
    bool relationshipstatus;

};


int main(){
    struct student sanjay;
    sanjay.rollno=2;
    sanjay.name="Sanjay singh gurjar";
    sanjay.gender='M';
    sanjay.percentage=90.03;
    sanjay.relationshipstatus=true;


}