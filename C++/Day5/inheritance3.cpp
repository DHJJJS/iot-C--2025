/*
	��Ӱ��迡�� �̴ϼȶ����� ����ϱ�
*/

//#include <iostream>
//
//class Car {
//private:
//	int gasolineGauge;
//public:
//	Car(int ag):gasolineGauge(ag){}					// �ݷ��ʱ�ȭ
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
//		printf("�ܿ� ���ָ�: %d\n", getGasGauge());
//		printf("�ܿ� ���ⷮ: %d\n", getElecGauge());
//		printf("�ܿ� ���ͷ�: %d\n", waterGauge);
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