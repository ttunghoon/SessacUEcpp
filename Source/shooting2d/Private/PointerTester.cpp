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
	UE_LOG(LogTemp, Warning, TEXT("%d"), *number1Pointer); 	//역-참조(Reference) 

	UE_LOG(LogTemp, Warning, TEXT("%d"), number2);
	UE_LOG(LogTemp, Warning, TEXT("%d"), *number2Pointer);


	Swap(&number1, &number2);

	//UE_LOG(LogTemp, Warning, TEXT("%p"), number1Pointer);
	UE_LOG(LogTemp, Warning, TEXT("%d"), number1);
	UE_LOG(LogTemp, Warning, TEXT("%d"), *number1Pointer); 	//역-참조(Reference) 

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
	int _temp; //교환을 위한 임시 중간 변수 

	//*pa , *pb 역참조 
	_temp = *pa; //temp에 pa가 가리키는 변수의 값 저장
	*pa = *pb; //pa가 가리키는 변수에, pb가 가리키는 변수의 값 저장
	*pb = _temp; //pb가 가리키는 변수에 temp 값 저장
}

//Call By Value
void APointerTester::Swap(int pa, int pb)
{
     //pa -> 값만 number 1 에서 복사  ?? 1234
     //pb ->값만 number 2 에서 복사 ?? 5678
     int _temp;

	_temp = pa; //temp . pa 값 복제
	pa= pb; //pa 에 pb 값 복제 
	pb= _temp; // pb 에 temp 값 복제 
}

