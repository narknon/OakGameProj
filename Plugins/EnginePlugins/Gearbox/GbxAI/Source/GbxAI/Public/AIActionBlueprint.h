#pragma once
#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "AIActionBlueprint.generated.h"

class UProperty;
class UAIActionBlueprint;
class UBlackboardData;

UCLASS()
class GBXAI_API UAIActionBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAIActionBlueprint* ParentBlueprint;
    
    UPROPERTY(EditAnywhere)
    UBlackboardData* Blackboard;
    
    UAIActionBlueprint();
    UFUNCTION()
    static bool ShouldSkipBlackboardProperty(UProperty* Property);
    
};

