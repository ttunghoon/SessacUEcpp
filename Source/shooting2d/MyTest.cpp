// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTest.h"

// C -> 
// Sets default values
AMyTest::AMyTest() 
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//�ʱ�ȭ �Ѵ� (Initialize)
	// Reset , 
	// ��ǻ�� ���� -> ��Ȱ�� 
	// ��ǻ�� -> ��δ� -> ������ ���̸Դ´� 
	// ���� + ���� -> new , delete (�޸𸮸� �� �Ҵ� -> �������� ����) 
	// ��Ȱ��
	// ��Ȱ ��Ȱ -> Reset(Refurbish) -> (Initialize) �ʱ�ȭ�� �ؼ� ��Ȱ���Ѵ�.
	// ���� �ʱ�ȭ 
	//�⺻��, �ʱⰪ 
	InitializeDamages();
}

// Called when the game starts or when spawned
void AMyTest::BeginPlay()
{
    //�θ� �θ��� (super %= ���� , �θ��) 

	Super::BeginPlay();
	
	//���� �� �߰��� ���� �ؼ� ������ 

	UE_LOG(LogTemp, Warning, TEXT("%d") , number1);
	UE_LOG(LogTemp, Warning, TEXT("%.3f"), number2);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *myName); //shift+8
	//1�� �ְ��� ����� ��� - ������ , pointer 
	

}

// Called every frame
void AMyTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//�ʱ�ȭ �ϱ� ~ 
void AMyTest::InitializeDamages()
{
	Damage = 10;
	Damage2 = 20;
}

