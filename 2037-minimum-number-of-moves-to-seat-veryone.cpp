class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int i = 0, j = 0, sum =0;

        while(i < seats.size() && j < students.size())
        {
            sum += abs(seats[i] - students[j]);
            i++, j++;
        }
        return sum;
    }
};
