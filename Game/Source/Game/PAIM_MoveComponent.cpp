// Fill out your copyright notice in the Description page of Project Settings.

#include "PAIM_MoveComponent.h"

// Sets default values
UPAIM_MoveComponent::UPAIM_MoveComponent()
{
    MoveToNewLoc = FVector(0.0f, 0.0f, 0.0f);
}

void UPAIM_MoveComponent::moveMe()
{

    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), PAIM_CHARACTER::StaticClass(), FoundActors);

    int instanceCount = FoundActors.Num();

    PAIM_CHARACTER* myFindMe = Cast<PAIM_CHARACTER>(FoundActors[0]);

    AAIController* myAIController = UAIBlueprintHelperLibrary::GetAIController(myFindMe);

    UAIBlueprintHelperLibrary::SimpleMoveToLocation(UAIBlueprintHelperLibrary::GetAIController(myFindMe), MoveToNewLoc);

}
