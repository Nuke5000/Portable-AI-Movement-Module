#pragma once

#define PAIM_API GAME_API
#define PAIM_CHARACTER ATest_Character
#include "Test_Character.h"


#include "CoreMinimal.h"
#include "AIController.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PawnMovementComponent.h"
#include "PAIM_MoveComponent.h"

#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"

#include "PAIM_AIController.h"
