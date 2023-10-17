// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyTest.generated.h"

UCLASS()
class SHOOTING2D_API AMyTest : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	// 생성자 
	AMyTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// virtual - > 가상의 
	

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int32 number1 = 10; 
	float number2 = 1.234567f;

	UPROPERTY(EditInstanceOnly)
	FString myName = "Animal";

	


	// 초마다 몇프레임 ? 
	// 컴퓨터 발열 , cpu -> 연산 -> 열이 생김 
	// 열이 높으면 -> 성능 하락 -> 연산이 떨어지는 현상
	// fps, 오락가락, 일률적이지 않음 
	// 같은 pc여도, 본인 pc 오늘 내일 , 같은 시점이여도 fps 다를 것 
	// 
	// DeltaTime , 고정된 시간 asd
	// 1초 (60 ) , frame (수치) 나눠서 
	// 1미만 ~ , pc 간의 1초 률 , 비율 

	//선언 , 보라색 ,연보라색 -> MACRO -> 함수, 연산 
	//코드를 문자로서만 축약
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	int32 Damage = 10; //기본값이 10이라고 정의 

	//옵션 option 글귀 ? 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage")
	int32 Damage2;


	//내가 변수를 하나 쓸껀데, 얘는, 에디터랑 연결되꺼야 
	//그 변수는 int, 변수 option, 그 언어에도 없음 , only Unreal 꺼 
	
	
	//그 변수가 int 인데
	//얘는, 에디터랑 연결되꺼야 
	
	// 메모리
	// 미리 정해줘야함 , 얼마나 ,
    //그떄그떄 메모리 정확하게 할당해주는건 불가능함
	// 이용자는 사람이고 -> 이용자가 앞으로 무엇을 하지 컴퓨터는 예상을 못하고
	// 이용자 컴퓨터의 최대치보다 더 쓴다하면, -> 컴퓨터 에러 (극단적인 에러)

	

	//함수
	// y = f(x) 
	// x (input) - > y (output) 
	void InitializeDamages();




private:

    //받을 돈 -> 사람 -> 외부데이터 
	//void CheckMoney()
	//{
	//     // 손님이 그래서 누군데 ? - 클래스 접근 , 액터 누군데 ? 
	//    *지금 손님 주소 (정확히 누군지 알려줌)
	//	// 받을돈 (손님) , 손님으로부터 get으로 가져온다 
	//	int _받은돈 = *손님`s 준돈
	//		if (_받은돈 > 받아야하는 돈)
	//		{
	//
	//	}
	//	else
	//	{
	//	}
    // }
};
