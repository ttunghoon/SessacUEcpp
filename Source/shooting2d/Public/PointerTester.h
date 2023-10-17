// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PointerTester.generated.h"

UCLASS()
class SHOOTING2D_API APointerTester : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APointerTester();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	int32 number1; 
	int32* number1Pointer;

	int32 number2;
	int32* number2Pointer;
	//12354ox3

	//�����Ͷ�°��� �ּҶ�鼭 
	// 12354ox3 12354ox4 12354ox5 
	// 12354ox3 -> �����ʹ� �޸��ּ��� �� ���ڸ�	
	double* doublePointer;
	//<pointer> ptr; -> type ?
	//������(���) -> ���� 
	//-> ���ư�����, ũ�Ⱑ ��¥������ �𸣴ϱ� 
	//
	//���� - �޸𸮴� �ֹ߼� - �̷����� 
	//���߿� �� �޸𸮰� ��¥������ �𸣱� ������ 

	//�ٸ� �Լ��� ��� 
	void Swap(int *pa, int *pb);
	void Swap(int pa, int pb);
};
