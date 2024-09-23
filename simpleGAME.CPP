#include<iostream>
using namespace std;
//#include<string>
int main(){
	const int num_questions = 3;
	int score = 0;
	std::string questions[num_questions] = {"What is the capital of france?", "Which PL in this quiz written in?","What is 2 + 2?"};
	std::string choices[num_questions][4] = {
	{"A. Berlin", "B. Madrid", "C. Paris", "D. Rome"},
	{"A. Java", "B. Python", "C. C++", "D. Ruby"},
	{"A. 3", "B. 4", "C. 5", "D. 6"},
};
	char answers[num_questions] = {'C','C','B'};
	int i,j;
	for(i = 0; i < num_questions; i++){
		std::cout<<questions[i]<<"\n";
		for(j = 0; j < 4; j++){
			std::cout<<choices[i][j]<<"  ";
		}
	printf("\n");
	std::cout<<endl<<"Enter your answer:";
	char user_answer;
	std::cin>>user_answer;
	if(user_answer == answers[i]){
		std::cout<<"Correct!\n\n";
		score++;
	}
	else{
		std::cout<<"Incorrect, The correct answer is"<<answers[i]<<"\n\n";
		}
}
std::cout<<"Your final score is:"<<score<<"/"<<num_questions<<"\n";
	return 0;
}
