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

	//포인터라는것은 주소라면서 
	// 12354ox3 12354ox4 12354ox5 
	// 12354ox3 -> 포인터는 메모리주소의 맨 앞자리	
	double* doublePointer;
	//<pointer> ptr; -> type ?
	//개발자(사람) -> 정적 
	//-> 돌아갔을때, 크기가 몇짜리일지 모르니까 
	//
	//동적 - 메모리는 휘발성 - 미래예측 
	//나중에 쓸 메모리가 몇짜리일지 모르기 때문에 

	//다른 함수로 취급 
	void Swap(int *pa, int *pb);
	void Swap(int pa, int pb);
};
