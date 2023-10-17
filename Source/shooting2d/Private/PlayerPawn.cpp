// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
APlayerPawn::APlayerPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//������ -> �̰��� �����ɶ��� ���� , �ʱ�ȭ 

	myBoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("MyBoxComponent"));
	// myBoxComp �� , ���������Ʈ �����ϱ� �Լ�(�𸮾�����) , ���´� <UBoxComponent> �̰�, �̸��� "MyBoxComponent" �Ұ� ~ ���� 

	SetRootComponent(myBoxComp);


    // const -> ��� , ��Ȯ�� ���� y = f(x) + b (���)
	// ������ �ʴ� �� 
	// -> ���� ,�޸� �������� �� ���ƿ� (���� ó����) 
	// �ٲٸ� �ٷ� ������ 
	// �Ҽ��� �ϵ� �ڵ�, ex) ���� ���� ���� -> �θ��̼� player ���� 
	//const int playerNumber = 2;	
	const FVector boxSize = FVector(32.0f, 32.0f, 50.0f);
	myBoxComp->SetBoxExtent(boxSize);
	

	//�ֻ�� ������Ʈ ���ϱ�, �ֻ���� -> myBoxComp�ϰڴ�
	myMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshCompo"));
	//���� -> �÷��� �߿� ���빰�� �ٲ��� �ʴ� �ִ� ->��ǻ�Ͱ� �� �ʿ䰡 ����. �̸������ ��
	//���� -> �÷��� �߿� ���빰�� �ٲ�� �ִ� �ִ� -> ��ǻ�Ͱ� �˰� �ְ�, �ֽ��ϰ�
	myMeshComp->SetupAttachment(myBoxComp);
	//�긦 �������� ���δ� (�θ� ���ϴµ� ,) ~ ����� myBoxComp 
	
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

