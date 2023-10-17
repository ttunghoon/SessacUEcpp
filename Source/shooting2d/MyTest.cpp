// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTest.h"

// C -> 
// Sets default values
AMyTest::AMyTest() 
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//초기화 한다 (Initialize)
	// Reset , 
	// 컴퓨터 성능 -> 재활용 
	// 컴퓨터 -> 비싸다 -> 성능을 많이먹는다 
	// 생성 + 삭제 -> new , delete (메모리를 재 할당 -> 물리적인 행위) 
	// 재활용
	// 재활 부활 -> Reset(Refurbish) -> (Initialize) 초기화를 해서 재활용한다.
	// 공장 초기화 
	//기본값, 초기값 
	InitializeDamages();
}

// Called when the game starts or when spawned
void AMyTest::BeginPlay()
{
    //부모꺼 부르고 (super %= 원본 , 부모것) 

	Super::BeginPlay();
	
	//내가 또 추가로 기입 해서 재정의 

	UE_LOG(LogTemp, Warning, TEXT("%d") , number1);
	UE_LOG(LogTemp, Warning, TEXT("%.3f"), number2);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *myName); //shift+8
	//1차 최고의 어려운 배움 - 포인터 , pointer 
	

}

// Called every frame
void AMyTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//초기화 하기 ~ 
void AMyTest::InitializeDamages()
{
	Damage = 10;
	Damage2 = 20;
}

