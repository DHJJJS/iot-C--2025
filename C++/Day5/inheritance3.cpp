/*
	상속관계에서 이니셜라이즈 사용하기
*/

//#include <iostream>
//
//class Car {
//private:
//	int gasolineGauge;
//public:
//	Car(int ag):gasolineGauge(ag){}					// 콜론초기화
//	int getGasGauge() { return gasolineGauge; }
//};
//
//class HybirdCar : public Car {
//private:
//	int electricGauge;
//public:
//	HybirdCar(int ag, int ae):Car(ag),electricGauge(ae){}
//	int getElecGauge() { return electricGauge; }
//};
//
//class HybirdWaterCar : public HybirdCar {
//	int waterGauge;
//public:
//	HybirdWaterCar(int ag, int ae, int aw):HybirdCar(ag, ae), waterGauge(aw) {}
//	void showGauge() {
//		printf("잔여 가솔린: %d\n", getGasGauge());
//		printf("잔여 전기량: %d\n", getElecGauge());
//		printf("잔여 워터량: %d\n", waterGauge);
//	}
//};
//
//int main()
//{
//	HybirdWaterCar hwc(10, 20, 30);
//	hwc.showGauge();
//
//	return 0;
//}