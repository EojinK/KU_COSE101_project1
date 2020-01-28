
// %[�÷���][��][.���е�][����]����������


#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//extraData ��� �Լ�(basic plan)
double extraData_B(double n) {

	double result;
	result = 2 - n;
	if (result < 0)
		result = 0;
	else if (result > 0.2)
		result = 0.2;

	return result;
}

//extraData ��� �Լ�(more plan)
double extraData_M(double n) {

	double result;
	result = 30 - n;
	if (result < 0)
		result = 0;
	else if (result > 3)
		result = 3;

	return result;
}

//total fee ��� �Լ�(basic plan)
int totalFee_B(int voice, int text, double data) {

	int result; //��� ���
	double intData = (double)data * 100; //���� �����ϱ�

	//�⺻ ������ �̸����� ���� �� ���Ŀ��� ������ ������ ���� ����
	if (voice < 500) voice = 500;
	if (text < 100) text = 100;
	if (intData < 200) intData = 200;

	result = (voice - 500) * 50 + (text - 100) * 10 + ((int)intData - 200) * 100 + 20000;

	return result;
}

//total fee ��� �Լ�(more plan)
int totalFee_M(int voice, int text, double data) {

	int result;
	double intData = (double)data * 100; //���� �����ϱ�

	//�⺻ ������ �̸����� ���� �� ���Ŀ��� ������ ������ ���� ����
	if (voice < 300) voice = 300;
	if (text < 100) text = 100;
	if (intData < 3000) intData = 3000;

	result = (voice - 300) * 10 + (text - 100) * 30 + ((int)intData - 3000) * 50 + 45000;

	return result;
}



int main(void) {
	//���� ����
	srand(time(NULL));

	//�⺻ ���� ����
	int menu; //�޴�
	char back='Y';

	//2. Past 2 months�� usage information
	int MyPlan = rand() % 2; //MyPlan ���� ����. 0�ϰ�� basic, 1�ϰ�� more data
	int Voice_Feb = 1 + rand() % 700; //1~700
	int Voice_Mar = 1 + rand() % 700;
	int Text_Feb = rand() % 301; //0~300
	int Text_Mar = rand() % 301;
	double Data_Feb = (rand() % 14951 + 50) * 0.01f;
	double Data_Mar = (rand() % 14951 + 50) * 0.01f;

	//3. Input this month Usage
	int Voice_User = 0;
	int Text_User = 0;
	double Data_User = 0;

	//4. Fee of Past 3 Months
	double extraData_Feb;



	back:
	//���θ޴� ���
	printf("�������������������������������������������������������������������������������������������������������� \n");
	printf("��     KU Mobile Phone Bill Calculator              �� \n");
	printf("�������������������������������������������������������������������������������������������������������� \n");
	printf("��     1 : Display plans                            �� \n");
	printf("��     2 : Usage information for past two months    �� \n");
	printf("��     3 : Input this month usage                   �� \n");
	printf("��     4 : Total fee for past 3 months              �� \n");
	printf("��     5 : Best plan recommendation                 �� \n");
	printf("��     6 : Exit                                     �� \n");
	printf("�������������������������������������������������������������������������������������������������������� \n");
	printf("Enter the menu number: ");
	scanf_s("%d", &menu);

	//�߸� �Է��� ���
	while (menu < 1 || menu > 6) {
		printf("Enter the menu number: ");
		scanf_s("%d", &menu);
	}




	// 1. Display plans 
	if (menu == 1) {

		//clean CMD
		system("cls");

		//display
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("��                    Basic Plan                    �� \n");
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("��   Included in plan     ��   Additonal usages      �� \n");
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("�� Voice       ��  500m free     ��  \\ 50 / 1m        �� \n");
		printf("�� Text        ��  100t free     ��  \\ 10 / 1t        �� \n");
		printf("�� Data        ��  2.00GB free   ��  \\ 1000 / 0.1GB   �� \n");
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("�� Basic fee   ��  \\ 20000                           �� \n");
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("\n");
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("��                  More Data Plan                  �� \n");
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("��   Included in plan     ��   Additonal usages      �� \n");
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("�� Voice       ��  300m free     ��  \\ 10 / 1m        �� \n");
		printf("�� Text        ��  100t free     ��  \\ 30 / 1t        �� \n");
		printf("�� Data        ��  30.00GB free  ��  \\ 500 / 0.1GB    �� \n");
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("�� Basic fee   ��  \\ 45000                           �� \n");
		printf("�������������������������������������������������������������������������������������������������������� \n");

	
	}



	// 2. Past 2 months�� usage information
	if (menu == 2) {

		//clean CMD
		system("cls");

		//display
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("��               Last two months usage              �� \n");
		printf("�������������������������������������������������������������������������������������������������������� \n");

		//basic plan
		if (MyPlan == 0) {
			printf("�� My Plan : Basic Plan                             �� \n");
		}

		//more data plan
		else {
			printf("�� My Plan : More Data Plan                         �� \n");
		}

		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("��             ��    Febuary       ��    March        �� \n");
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("�� Voice       ��  %5d min       ��  %5d min      �� \n", Voice_Feb, Voice_Mar);
		printf("�� Text        ��  %5d text      ��  %5d text     �� \n", Text_Feb, Text_Mar);
		printf("�� Data        ��  %7.2lf GB      ��  %7.2lf GB     �� \n", Data_Feb, Data_Mar);
		printf("�������������������������������������������������������������������������������������������������������� \n");

	
	}




	// 3. Input this month Usage
	if (menu == 3) {

		//clean CMD
		system("cls");

		printf("==================================== \n");
		printf("Input your usages of voice : ");
		scanf_s("%d", &Voice_User);
		printf("Input your usages of text : ");
		scanf_s("%d", &Text_User);
		printf("Input your usages of data : ");
		scanf_s("%lf", &Data_User);


	}




	// 4. Fee of Past 3 Months
	if (menu == 4) {

		//clean CMD
		system("cls");

		//display
		printf("�������������������������������������������������������������������������������������������������������������������������������������������� \n");
		printf("��                        My three months usage                       �� \n");
		printf("�������������������������������������������������������������������������������������������������������������������������������������������� \n");

		//basic plan
		if (MyPlan == 0) {
			printf("�� My Plan : Basic Plan                                               �� \n");
			printf("�������������������������������������������������������������������������������������������������������������������������������������������� \n");
			printf("��             ��    Febuary       ��    March        ��    April        �� \n");
			printf("�������������������������������������������������������������������������������������������������������������������������������������������� \n");
			printf("�� Voice       ��  %5d min       ��  %5d min      ��  %5d min      �� \n", Voice_Feb, Voice_Mar, Voice_User);
			printf("�� Text        ��  %5d text      ��  %5d text     ��  %5d text     �� \n", Text_Feb, Text_Mar, Text_User);
			printf("�� Data        ��  %7.2lf GB      ��  %7.2lf GB     ��  %7.2lf GB     �� \n", Data_Feb, Data_Mar, Data_User);
			printf("�������������������������������������������������������������������������������������������������������������������������������������������� \n");
			printf("�� Extra Data  ��  %7.2lf GB      ��  %7.2lf GB     ��  %7.2lf GB     �� \n", 
				extraData_B(Data_Feb), extraData_B(Data_Mar), extraData_B(Data_User));
			printf("�������������������������������������������������������������������������������������������������������������������������������������������� \n");
			printf("�� Total Fee   ��  \\ %10d    ��  \\ %10d   ��  \\ %10d   �� \n", 
				totalFee_B(Voice_Feb, Text_Feb, Data_Feb), 
				totalFee_B(Voice_Mar, Text_Mar, Data_Mar), 
				totalFee_B(Voice_User, Text_User, Data_User));
			printf("�������������������������������������������������������������������������������������������������������������������������������������������� \n");
		
		}

		//more data plan
		else {
			printf("�� My Plan : More Data Plan                                           �� \n");
			printf("�������������������������������������������������������������������������������������������������������������������������������������������� \n");
			printf("��             ��    Febuary       ��    March        ��    April        �� \n");
			printf("�������������������������������������������������������������������������������������������������������������������������������������������� \n");
			printf("�� Voice       ��  %5d min       ��  %5d min      ��  %5d min      �� \n", Voice_Feb, Voice_Mar, Voice_User);
			printf("�� Text        ��  %5d text      ��  %5d text     ��  %5d text     �� \n", Text_Feb, Text_Mar, Text_User);
			printf("�� Data        ��  %7.2lf GB      ��  %7.2lf GB     ��  %7.2lf GB     �� \n", Data_Feb, Data_Mar, Data_User);
			printf("�������������������������������������������������������������������������������������������������������������������������������������������� \n");
			printf("�� Extra Data  ��  %7.2lf GB      ��  %7.2lf GB     ��  %7.2lf GB     �� \n",
				extraData_M(Data_Feb), extraData_M(Data_Mar), extraData_M(Data_User));
			printf("�������������������������������������������������������������������������������������������������������������������������������������������� \n");

			printf("�� Total Fee   ��  \\ %10d    ��  \\ %10d   ��  \\ %10d   �� \n",
				totalFee_M(Voice_Feb, Text_Feb, Data_Feb),
				totalFee_M(Voice_Mar, Text_Mar, Data_Mar),
				totalFee_M(Voice_User, Text_User, Data_User));
			printf("�������������������������������������������������������������������������������������������������������������������������������������������� \n");

		
		}

	
	
	
	}


	// 5. Best plan recommendation
	if (menu == 5) {

		int averageVoice = (Voice_Feb + Voice_Mar + Voice_User) / 3;
		int averageText = (Text_Feb + Text_Mar + Text_User) / 3;
		double averageData = (Data_Feb + Data_Mar + Data_User) / 3;

		//clean CMD
		system("cls");

		//display
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("��             Average usage of 3-month             �� \n");
		printf("�������������������������������������������������������������������������������������������������������� \n");
		//basic plan
		if (MyPlan == 0) {
			printf("�� My Plan : Basic Plan                             �� \n");
		}

		//more data plan
		else {
			printf("�� My Plan : More Data Plan                         �� \n");
		}
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("�� Average usage of voice :   %5d                 �� \n",averageVoice);
		printf("�� Average usage of text :    %5d                 �� \n",averageText);
		printf("�� Average usage of data :  %7.2lf                 �� \n",averageData);
		printf("�������������������������������������������������������������������������������������������������������� \n");
		printf("�� Basic Plan Fee :       \\ %7d                 �� \n", totalFee_B(averageVoice,averageText,averageData));
		printf("�� More Data Plan Fee :   \\ %7d                 �� \n", totalFee_M(averageVoice, averageText, averageData));
		printf("�������������������������������������������������������������������������������������������������������� \n");
		//basic plan
		if (totalFee_B(averageVoice, averageText, averageData)< totalFee_M(averageVoice, averageText, averageData)) {
			printf("�� We recommend to use Basic Plan                   �� \n");
		}

		//more data plan
		else {
			printf("�� We recommend to use More Data Plan               �� \n");
		}
		printf("�������������������������������������������������������������������������������������������������������� \n");
	
	
	}

	//6. Exit
	if (menu == 6)
		return 0;

	//backmenu
	printf(" Back to main menu Y/N: ");
	scanf_s("%*c%c", &back);
	while (back == 'N') {
		printf(" Back to main menu Y/N: "); //�ٽ� �Է¹ޱ�
		scanf_s("%*c%c", &back);
	}
	if (back == 'Y') {
		system("cls");
		goto back; //���� �޴��� ���ư���
	}


	return 0;
}




