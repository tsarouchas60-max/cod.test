#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> v;
    for(int i=0;i<(int)student_scores.size();i++)
           v.push_back((int)student_scores[i]);
    return v;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int sum=0;
    for(int i=0;i<(int)student_scores.size();i++)
        if(student_scores[i]<=40)
            sum++;
    return sum;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int A,B,C,D;
    int k=(highest_score-40)/4;
    A=40+3*k+1; 
    B=40+2*k+1;
    C=40+k+1;
    D=40+1;
    return {D,C,B,A};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> total;
    for(int i=0;i<(int)student_scores.size();i++)
        total.push_back(std::to_string(i+1)+". "+student_names[i]+": "+std::to_string(student_scores[i]));
    return total;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    std::string name="";
    for(int i=0;i<(int)student_scores.size();i++)
        if(student_scores[i]==100)
        {name=student_names[i];break;}
    return name;
}
