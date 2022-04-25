#pragma once

#include "PAIM_Headers.h"
#include "BTService_PAIM_Service_Check.generated.h"

UCLASS()
class PAIM_API UBTService_PAIM_Service_Check : public UBTService
{
    GENERATED_BODY()
public:
    UBTService_PAIM_Service_Check();
    
    virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
