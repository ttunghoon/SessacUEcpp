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
	// ������ 
	AMyTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// virtual - > ������ 
	

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int32 number1 = 10; 
	float number2 = 1.234567f;

	UPROPERTY(EditInstanceOnly)
	FString myName = "Animal";

	


	// �ʸ��� �������� ? 
	// ��ǻ�� �߿� , cpu -> ���� -> ���� ���� 
	// ���� ������ -> ���� �϶� -> ������ �������� ����
	// fps, ��������, �Ϸ������� ���� 
	// ���� pc����, ���� pc ���� ���� , ���� �����̿��� fps �ٸ� �� 
	// 
	// DeltaTime , ������ �ð� asd
	// 1�� (60 ) , frame (��ġ) ������ 
	// 1�̸� ~ , pc ���� 1�� �� , ���� 

	//���� , ����� ,������� -> MACRO -> �Լ�, ���� 
	//�ڵ带 ���ڷμ��� ���
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	int32 Damage = 10; //�⺻���� 10�̶�� ���� 

	//�ɼ� option �۱� ? 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage")
	int32 Damage2;


	//���� ������ �ϳ� ������, ���, �����Ͷ� ����ǲ��� 
	//�� ������ int, ���� option, �� ���� ���� , only Unreal �� 
	
	
	//�� ������ int �ε�
	//���, �����Ͷ� ����ǲ��� 
	
	// �޸�
	// �̸� ��������� , �󸶳� ,
    //�׋��׋� �޸� ��Ȯ�ϰ� �Ҵ����ִ°� �Ұ�����
	// �̿��ڴ� ����̰� -> �̿��ڰ� ������ ������ ���� ��ǻ�ʹ� ������ ���ϰ�
	// �̿��� ��ǻ���� �ִ�ġ���� �� �����ϸ�, -> ��ǻ�� ���� (�ش����� ����)

	

	//�Լ�
	// y = f(x) 
	// x (input) - > y (output) 
	void InitializeDamages();




private:

    //���� �� -> ��� -> �ܺε����� 
	//void CheckMoney()
	//{
	//     // �մ��� �׷��� ������ ? - Ŭ���� ���� , ���� ������ ? 
	//    *���� �մ� �ּ� (��Ȯ�� ������ �˷���)
	//	// ������ (�մ�) , �մ����κ��� get���� �����´� 
	//	int _������ = *�մ�`s �ص�
	//		if (_������ > �޾ƾ��ϴ� ��)
	//		{
	//
	//	}
	//	else
	//	{
	//	}
    // }
};
