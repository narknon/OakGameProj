#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BlackboardKeyType_Struct.generated.h"

class UScriptStruct;

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UBlackboardKeyType_Struct : public UBlackboardKeyType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UScriptStruct* Type;
    
public:
    UBlackboardKeyType_Struct();
};

