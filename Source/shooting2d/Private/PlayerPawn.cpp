// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
APlayerPawn::APlayerPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//생성자 -> 이것이 생성될때의 값들 , 초기화 

	myBoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("MyBoxComponent"));
	// myBoxComp 를 , 서브오브젝트 생성하기 함수(언리얼제공) , 형태는 <UBoxComponent> 이고, 이름은 "MyBoxComponent" 할게 ~ 정의 

	SetRootComponent(myBoxComp);


    // const -> 상수 , 정확한 비유 y = f(x) + b (상수)
	// 변하지 않는 수 
	// -> 성능 ,메모리 변수보다 더 좋아요 (빨리 처리함) 
	// 바꾸면 바로 에러남 
	// 소소한 하드 코딩, ex) 대전 격투 게임 -> 두명이서 player 숫자 
	//const int playerNumber = 2;	
	const FVector boxSize = FVector(32.0f, 32.0f, 50.0f);
	myBoxComp->SetBoxExtent(boxSize);
	

	//최상단 컴포넌트 정하기, 최상단을 -> myBoxComp하겠다
	myMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshCompo"));
	//정적 -> 플레이 중에 내용물이 바뀌지 않는 애다 ->컴퓨터가 알 필요가 없다. 미리연산된 값
	//동적 -> 플레이 중에 내용물이 바뀔수 있는 애다 -> 컴퓨터가 알고 있고, 주시하고
	myMeshComp->SetupAttachment(myBoxComp);
	//얘를 누구한테 붙인다 (부모를 정하는데 ,) ~ 대상이 myBoxComp 
	
	const FVector relativePos = FVector(0, 0, -50.f);
	myMeshComp->SetRelativeLocation(relativePos);

		
	//static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshRef(TEXT("/Script///Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//if (MeshRef.Succeeded() && MeshRef.Object != nullptr)
	//{
	//	myMeshComp->SetStaticMesh(MeshRef.Object);
	//}
	
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

