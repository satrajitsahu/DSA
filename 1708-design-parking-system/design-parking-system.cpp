class ParkingSystem {
    int s[4];
public:
    ParkingSystem(int big, int medium, int small) {
        s[1]=big;
        s[2]=medium;
        s[3]=small;
    }
    bool addCar(int carType) {
        if(s[carType]>0){
            s[carType]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */