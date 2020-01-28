
// %[Ы楚斜][ァ][.薑塵紫][望檜]憮衝雖薑濠


#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//extraData 啗骯 л熱(basic plan)
double extraData_B(double n) {

	double result;
	result = 2 - n;
	if (result < 0)
		result = 0;
	else if (result > 0.2)
		result = 0.2;

	return result;
}

//extraData 啗骯 л熱(more plan)
double extraData_M(double n) {

	double result;
	result = 30 - n;
	if (result < 0)
		result = 0;
	else if (result > 3)
		result = 3;

	return result;
}

//total fee 啗骯 л熱(basic plan)
int totalFee_B(int voice, int text, double data) {

	int result; //唸婁 轎溘
	double intData = (double)data * 100; //螃離 熱薑ж晦

	//晦獄 薯奢榆 嘐虜戲煎 質擊 陽 啗骯衝縑憮 擠熱陛 釭螃朝 匙擊 寞雖
	if (voice < 500) voice = 500;
	if (text < 100) text = 100;
	if (intData < 200) intData = 200;

	result = (voice - 500) * 50 + (text - 100) * 10 + ((int)intData - 200) * 100 + 20000;

	return result;
}

//total fee 啗骯 л熱(more plan)
int totalFee_M(int voice, int text, double data) {

	int result;
	double intData = (double)data * 100; //螃離 熱薑ж晦

	//晦獄 薯奢榆 嘐虜戲煎 質擊 陽 啗骯衝縑憮 擠熱陛 釭螃朝 匙擊 寞雖
	if (voice < 300) voice = 300;
	if (text < 100) text = 100;
	if (intData < 3000) intData = 3000;

	result = (voice - 300) * 10 + (text - 100) * 30 + ((int)intData - 3000) * 50 + 45000;

	return result;
}



int main(void) {
	//陪熱 儅撩
	srand(time(NULL));

	//晦獄 滲熱 摹樹
	int menu; //詭景
	char back='Y';

	//2. Past 2 months＊ usage information
	int MyPlan = rand() % 2; //MyPlan 楠渾 儅撩. 0橾唳辦 basic, 1橾唳辦 more data
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
	//詭檣詭景 轎溘
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
	printf("弛     KU Mobile Phone Bill Calculator              弛 \n");
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
	printf("弛     1 : Display plans                            弛 \n");
	printf("弛     2 : Usage information for past two months    弛 \n");
	printf("弛     3 : Input this month usage                   弛 \n");
	printf("弛     4 : Total fee for past 3 months              弛 \n");
	printf("弛     5 : Best plan recommendation                 弛 \n");
	printf("弛     6 : Exit                                     弛 \n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
	printf("Enter the menu number: ");
	scanf_s("%d", &menu);

	//澀跤 殮溘й 唳辦
	while (menu < 1 || menu > 6) {
		printf("Enter the menu number: ");
		scanf_s("%d", &menu);
	}




	// 1. Display plans 
	if (menu == 1) {

		//clean CMD
		system("cls");

		//display
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
		printf("弛                    Basic Plan                    弛 \n");
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
		printf("弛   Included in plan     弛   Additonal usages      弛 \n");
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
		printf("弛 Voice       弛  500m free     弛  \\ 50 / 1m        弛 \n");
		printf("弛 Text        弛  100t free     弛  \\ 10 / 1t        弛 \n");
		printf("弛 Data        弛  2.00GB free   弛  \\ 1000 / 0.1GB   弛 \n");
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
		printf("弛 Basic fee   弛  \\ 20000                           弛 \n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		printf("\n");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
		printf("弛                  More Data Plan                  弛 \n");
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
		printf("弛   Included in plan     弛   Additonal usages      弛 \n");
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
		printf("弛 Voice       弛  300m free     弛  \\ 10 / 1m        弛 \n");
		printf("弛 Text        弛  100t free     弛  \\ 30 / 1t        弛 \n");
		printf("弛 Data        弛  30.00GB free  弛  \\ 500 / 0.1GB    弛 \n");
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
		printf("弛 Basic fee   弛  \\ 45000                           弛 \n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");

	
	}



	// 2. Past 2 months＊ usage information
	if (menu == 2) {

		//clean CMD
		system("cls");

		//display
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
		printf("弛               Last two months usage              弛 \n");
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");

		//basic plan
		if (MyPlan == 0) {
			printf("弛 My Plan : Basic Plan                             弛 \n");
		}

		//more data plan
		else {
			printf("弛 My Plan : More Data Plan                         弛 \n");
		}

		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
		printf("弛             弛    Febuary       弛    March        弛 \n");
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
		printf("弛 Voice       弛  %5d min       弛  %5d min      弛 \n", Voice_Feb, Voice_Mar);
		printf("弛 Text        弛  %5d text      弛  %5d text     弛 \n", Text_Feb, Text_Mar);
		printf("弛 Data        弛  %7.2lf GB      弛  %7.2lf GB     弛 \n", Data_Feb, Data_Mar);
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");

	
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
		printf("弛                        My three months usage                       弛 \n");
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");

		//basic plan
		if (MyPlan == 0) {
			printf("弛 My Plan : Basic Plan                                               弛 \n");
			printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
			printf("弛             弛    Febuary       弛    March        弛    April        弛 \n");
			printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
			printf("弛 Voice       弛  %5d min       弛  %5d min      弛  %5d min      弛 \n", Voice_Feb, Voice_Mar, Voice_User);
			printf("弛 Text        弛  %5d text      弛  %5d text     弛  %5d text     弛 \n", Text_Feb, Text_Mar, Text_User);
			printf("弛 Data        弛  %7.2lf GB      弛  %7.2lf GB     弛  %7.2lf GB     弛 \n", Data_Feb, Data_Mar, Data_User);
			printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
			printf("弛 Extra Data  弛  %7.2lf GB      弛  %7.2lf GB     弛  %7.2lf GB     弛 \n", 
				extraData_B(Data_Feb), extraData_B(Data_Mar), extraData_B(Data_User));
			printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
			printf("弛 Total Fee   弛  \\ %10d    弛  \\ %10d   弛  \\ %10d   弛 \n", 
				totalFee_B(Voice_Feb, Text_Feb, Data_Feb), 
				totalFee_B(Voice_Mar, Text_Mar, Data_Mar), 
				totalFee_B(Voice_User, Text_User, Data_User));
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		
		}

		//more data plan
		else {
			printf("弛 My Plan : More Data Plan                                           弛 \n");
			printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
			printf("弛             弛    Febuary       弛    March        弛    April        弛 \n");
			printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
			printf("弛 Voice       弛  %5d min       弛  %5d min      弛  %5d min      弛 \n", Voice_Feb, Voice_Mar, Voice_User);
			printf("弛 Text        弛  %5d text      弛  %5d text     弛  %5d text     弛 \n", Text_Feb, Text_Mar, Text_User);
			printf("弛 Data        弛  %7.2lf GB      弛  %7.2lf GB     弛  %7.2lf GB     弛 \n", Data_Feb, Data_Mar, Data_User);
			printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
			printf("弛 Extra Data  弛  %7.2lf GB      弛  %7.2lf GB     弛  %7.2lf GB     弛 \n",
				extraData_M(Data_Feb), extraData_M(Data_Mar), extraData_M(Data_User));
			printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");

			printf("弛 Total Fee   弛  \\ %10d    弛  \\ %10d   弛  \\ %10d   弛 \n",
				totalFee_M(Voice_Feb, Text_Feb, Data_Feb),
				totalFee_M(Voice_Mar, Text_Mar, Data_Mar),
				totalFee_M(Voice_User, Text_User, Data_User));
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");

		
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
		printf("弛             Average usage of 3-month             弛 \n");
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
		//basic plan
		if (MyPlan == 0) {
			printf("弛 My Plan : Basic Plan                             弛 \n");
		}

		//more data plan
		else {
			printf("弛 My Plan : More Data Plan                         弛 \n");
		}
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
		printf("弛 Average usage of voice :   %5d                 弛 \n",averageVoice);
		printf("弛 Average usage of text :    %5d                 弛 \n",averageText);
		printf("弛 Average usage of data :  %7.2lf                 弛 \n",averageData);
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
		printf("弛 Basic Plan Fee :       \\ %7d                 弛 \n", totalFee_B(averageVoice,averageText,averageData));
		printf("弛 More Data Plan Fee :   \\ %7d                 弛 \n", totalFee_M(averageVoice, averageText, averageData));
		printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
		//basic plan
		if (totalFee_B(averageVoice, averageText, averageData)< totalFee_M(averageVoice, averageText, averageData)) {
			printf("弛 We recommend to use Basic Plan                   弛 \n");
		}

		//more data plan
		else {
			printf("弛 We recommend to use More Data Plan               弛 \n");
		}
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
	
	
	}

	//6. Exit
	if (menu == 6)
		return 0;

	//backmenu
	printf(" Back to main menu Y/N: ");
	scanf_s("%*c%c", &back);
	while (back == 'N') {
		printf(" Back to main menu Y/N: "); //棻衛 殮溘嫡晦
		scanf_s("%*c%c", &back);
	}
	if (back == 'Y') {
		system("cls");
		goto back; //詭檣 詭景煎 給嬴陛晦
	}


	return 0;
}




