// Fill out your copyright notice in the Description page of Project Settings.

#include "PAIM_AIController.h"


 APAIM_AIController::APAIM_AIController()
 {
     BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
     
     BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
 }

 void APAIM_AIController::PossessEnemy(APawn *InPawn)
 {
     Super::Possess(InPawn);
     
     UPAIM_MoveComponent *Char = Cast<UPAIM_MoveComponent>(InPawn);
     
     if(Char && Char->BotBehavior)
     {
         BlackboardComp->InitializeBlackboard(*Char->BotBehavior->BlackboardAsset);
         
         CustomerKeyID  = BlackboardComp->GetKeyID("Target");
         
         BehaviorComp->StartTree(*Char->BotBehavior);
     }
     
 }
 

