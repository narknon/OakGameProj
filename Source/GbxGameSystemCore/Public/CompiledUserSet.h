#pragma once
#include "CoreMinimal.h"
#include "Engine/MemberReference.h"
#include "CompiledUserSet.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCompiledUserSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMemberReference StateProperty;
    
    UPROPERTY()
    TArray<FName> EnableConditionVariableNames;
    
    FCompiledUserSet();
};

