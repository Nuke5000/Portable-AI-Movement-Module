// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PAIM_Headers.h"
#include "PAIM_AIController.generated.h"


 UCLASS()
 class PAIM_API APAIM_AIController : public AAIController
 {
     GENERATED_BODY()
     
     UPROPERTY(transient)
     class UBlackboardComponent *BlackboardComp;
     
     UPROPERTY(transient)
     class UBehaviorTreeComponent *BehaviorComp;
     
 public:
     
     APAIM_AIController();
     
     virtual void PossessEnemy(APawn *InPawn);
     
     uint8 CustomerKeyID;
     
 };
 

