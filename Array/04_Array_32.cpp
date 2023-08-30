#include <iostream>
#include <cmath>

using namespace std;

int checkDirection(int currentFloor, int targetFloor) {
    if (currentFloor < targetFloor) {
        return 1;
    } else if (currentFloor > targetFloor) {
        return -1;
    } else {
        return 0;
    }
}

int calculateMoreWork(int liftCurrentFloor, int liftTargetFloor, int passengerCurrentFloor, int passengerTargetFloor) {
    int liftDirection = checkDirection(liftCurrentFloor, liftTargetFloor);

    // If the passenger is on the way of the lift
    if ((liftDirection == 1 && passengerCurrentFloor > liftCurrentFloor && passengerCurrentFloor < liftTargetFloor) || 
        (liftDirection == -1 && passengerCurrentFloor < liftCurrentFloor && passengerCurrentFloor > liftTargetFloor)) {
        return abs(passengerTargetFloor - passengerCurrentFloor);
    }
    // Else
    return abs(liftCurrentFloor - passengerCurrentFloor) + abs(passengerTargetFloor - passengerCurrentFloor);
}

int main() {
    int n; // number of lifts
    cin >> n;
    int lift[n][3]; // 0: lift number, 1: current floor, 2: target floor

    for (int i = 0; i < n; i++) {
        cin >> lift[i][0] >> lift[i][1] >> lift[i][2];
    }

    int m; // number of people
    cin >> m;
    int people[m][2]; // 0: current floor, 1: target floor

    for (int i = 0; i < m; i++) {
        cin >> people[i][0] >> people[i][1];
    }

    for (int i = 0; i < m; ++i) {
        int min_work = 9999;
        int best_lift = -1;
        cout << "Person number: " << i << " This is work from each lift: ";
        for (int j = 0; j < n; ++j) {
            int work = calculateMoreWork(lift[j][1], lift[j][2], people[i][0], people[i][1]);
            cout << work << " ";
            if (work < min_work || (work == min_work && lift[j][0] < lift[best_lift][0])) {
                min_work = work;
                best_lift = j;
            }
        }
        cout << "\nBest lift for person " << i << " is Lift: " << lift[best_lift][0] << " with work: " << min_work << "\n";
    }

    return 0;
}
