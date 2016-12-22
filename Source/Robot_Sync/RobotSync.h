// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Networking.h"
#include <string.h>
#include "GameFramework/Actor.h"
#include "RobotSync.generated.h"

UCLASS()
class ROBOT_SYNC_API ARobotSync : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARobotSync();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

private:

	void OnStart();

	void ConnectSocket();

	void SendReadyStatus();

	void ReadData();

	FSocket *OrchConn;

};
