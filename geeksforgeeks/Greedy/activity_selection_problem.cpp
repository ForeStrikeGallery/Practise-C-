/*
 *   Activity Selection Problem
 *   
 * The activity selection problem is a combinatorial optimization problem 
 * concerning the selection of non-conflicting activities to perform within
 * a given time frame, given a set of activities each marked 
 * by a start time (si) and finish time (fi). The problem is to select 
 * the maximum number of activities that can be performed by a single person 
 * or machine, assuming that a person can only work on a single activity at a time. 
 *
 * 
*/


/*
	Now, Activity Selection Problem is one of those standard greedy algorithm
	problems that every text book teaches. Let's see how to solve it. 

	Given:

		set of activity start time and end times:
		( s1, f1), (s2, f2 ), (s3, f3)

	To Find:

		Maximum number of activities that can be done. 

	Solution:

		First of all, if there's an overlap between finish time
		of one and the start time of another, then you can at best
		do only one of those tasks. 

		So your job is pick tasks such that overlaps are minimized.

		Here's where the greedy part comes in.

		Say we've started picking some tasks from the pool of tasks.
		At any point in time, make sure you have the most number of tasks
		to pick from. For this, we need to minize the overlaps between the
		finish time of the tasks we've already chosen, and start times
		of the pool of tasks from which we pick.

		To do this, all you have to do is this:
		While picking a task, pick the one which finishes the earliest, so
		long as it's start time occurs after the finish time of the last
		task we picked in the same way.

		For the first task, simply pick the task which finishes first. 

		The algorithm is a greedy algorithm because at each step we do
		what we think is the localy optimal step, in the hopes that 
		we eventually reach a globaly optimal solution.

		python code
		-----------

		tasks = [(s1, f1), (s2, f2), (s3, f3)..]
		tasks = sorted(tasks, key=itemgetter(1))
		picked_tasks = []

		for task in tasks:
			if len(picked_tasks) == 0:
				picked_tasks.append(task)
				continue

			prev_task = picked_task[-1]
			if task[0] > prev_task[1]:
				picked_tasks.append(task)



	
*/


#include<bits/stdc++.h>
#include<string>




bool taskCmp(std :: pair<int,int> &task1, std :: pair <int, int> &task2) {
	if (task1.second <= task2.second)
		return true;
	return false;
}

//printer p(true);

int main() {
	int start_time[] = {1, 3, 5, 2, 3};
	int finish_time[] = {3, 4, 8, 3, 9};

	int n = sizeof(start_time)/sizeof(start_time[0]); 
	std::vector< std :: pair<int,int> > tasks;

	for (int i=0; i<n; i++) {
		std :: pair<int, int> p;
		p.first = start_time[i];
		p.second = finish_time[i];
		tasks.push_back(p); 
	}

	sort(tasks.begin(), tasks.begin() + sizeof(tasks)/sizeof(tasks[0]), taskCmp);

	std::vector<std :: pair<int, int> > picked_tasks;

	for (int i=0; i<n; i++) {
		if (picked_tasks.size() == 0) {
			picked_tasks.push_back(tasks[i]);
			std :: cout << tasks[i].first << tasks[i].second;
			continue;
		}

		if (tasks[i].first >= tasks[i-1].second) {
			picked_tasks.push_back(tasks[i]);
			std :: cout << tasks[i].first << tasks[i].second;

		}

	}



	return 0;
}






