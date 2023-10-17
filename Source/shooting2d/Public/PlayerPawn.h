// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class SHOOTING2D_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(EditAnywhere)
	class UBoxComponent* myBoxComp; // 주소일뿐 , UBoxComponent(X) , 주소인데 데이터가 UBoxComponent 가 들어올꺼야  
	//박스 충돌체 컴포넌트를, myBoxComp라는 이름으로 하나 쓸게~ 라고 선언 + 
	//얘를 에디터에서 편집가능하게 -> UPROPERTY(EditAnywhere)

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* myMeshComp;// 주소일뿐 , UStaticMeshComponent(X) , 주소인데 데이터가 UStaticMeshComponent 가 들어올꺼야  



};
