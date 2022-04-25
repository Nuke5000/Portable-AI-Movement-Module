#include "BTService_PAIM_Service_Check.h"

UBTService_PAIM_Service_Check:: UBTService_PAIM_Service_Check()
{
    bCreateNodeInstance  = true;
}

void UBTService_PAIM_Service_Check::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    APAIM_AIController *EnemyPC = Cast<APAIM_AIController>(OwnerComp.GetAIOwner()); //Gets the AI controller class

    if(EnemyPC)
    {
        UPAIM_MoveComponent *Enemy = Cast<UPAIM_MoveComponent>(GetWorld()->GetFirstPlayerController()->GetPawn());

        if(Enemy)
        {
            OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(EnemyPC->CustomerKeyID, Enemy);
        }
    }
}
