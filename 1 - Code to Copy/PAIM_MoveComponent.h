// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PAIM_Headers.h"
#include "PAIM_MoveComponent.generated.h"

UCLASS( Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PAIM_API UPAIM_MoveComponent : public UActorComponent
{
    GENERATED_BODY()
    
public:
    // Sets default values for this character's properties
    UPAIM_MoveComponent();
    
    //AI Movement
    UPROPERTY(EditAnywhere, Category = "PAIM AI Movement")
    class UBehaviorTree *BotBehavior;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PAIM AI Movement")
    FVector MoveToNewLoc;

    UFUNCTION(BlueprintCallable, Category = "PAIM AI Movement")
    void moveMe();

};
