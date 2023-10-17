// Fill out your copyright notice in the Description page of Project Settings.


#include "PointerTester.h"

// Sets default values
APointerTester::APointerTester()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APointerTester::BeginPlay()
{
	Super::BeginPlay();


	number1 = 1234;
	number1Pointer = &number1;
	

	number2 = 5678;
	number2Pointer = &number2;

	//UE_LOG(LogTemp, Warning, TEXT("%p"), number1Pointer);
	UE_LOG(LogTemp, Warning, TEXT("%d"), number1);
	UE_LOG(LogTemp, Warning, TEXT("%d"), *number1Pointer); 	//��-����(Reference) 

	UE_LOG(LogTemp, Warning, TEXT("%d"), number2);
	UE_LOG(LogTemp, Warning, TEXT("%d"), *number2Pointer);


	Swap(&number1, &number2);

	//UE_LOG(LogTemp, Warning, TEXT("%p"), number1Pointer);
	UE_LOG(LogTemp, Warning, TEXT("%d"), number1);
	UE_LOG(LogTemp, Warning, TEXT("%d"), *number1Pointer); 	//��-����(Reference) 

	UE_LOG(LogTemp, Warning, TEXT("%d"), number2);
	UE_LOG(LogTemp, Warning, TEXT("%d"), *number2Pointer);
	
}

// Called every frame
void APointerTester::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Call By Reference 
void APointerTester::Swap(int* pa, int* pb)
{
	int _temp; //��ȯ�� ���� �ӽ� �߰� ���� 

	//*pa , *pb ������ 
	_temp = *pa; //temp�� pa�� ����Ű�� ������ �� ����
	*pa = *pb; //pa�� ����Ű�� ������, pb�� ����Ű�� ������ �� ����
	*pb = _temp; //pb�� ����Ű�� ������ temp �� ����
}

//Call By Value
void APointerTester::Swap(int pa, int pb)
{
     //pa -> ���� number 1 ���� ����  ?? 1234
     //pb ->���� number 2 ���� ���� ?? 5678
     int _temp;

	_temp = pa; //temp . pa �� ����
	pa= pb; //pa �� pb �� ���� 
	pb= _temp; // pb �� temp �� ���� 
}

