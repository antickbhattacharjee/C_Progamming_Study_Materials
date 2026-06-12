#include <stdio.h>
void gain_experience(int job_experience);
int job_interview(int work_experience){
	int get_job = 0;
	if(work_experience == 0){
		printf("You need experience to get this job!\n");
		gain_experience(work_experience);
	} else {
		get_job = 1;
		printf("Congrats! You got the job.\n");
	}
	return get_job;
}
void gain_experience(int job_experience){
	if(job_experience == 0){
		printf("You need a job to gain experience!\n");
		job_interview(job_experience);
	} else {
		printf("You gained some experience!\n");
	}
}
int main(){
	int experience = 0;
	int Interview_Result = job_interview(experience);
	printf("Interviewer: Result = %d\n", Interview_Result);

	return 0;
}
