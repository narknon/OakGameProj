#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GbxLevelSequenceThrottleLibrary.generated.h"

class AGbxLevelSequenceActor;

UCLASS(BlueprintType)
class UGbxLevelSequenceThrottleLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxLevelSequenceThrottleLibrary();
    UFUNCTION(BlueprintCallable)
    static void UnlimitSequenceActor(AGbxLevelSequenceActor* Player);
    
    UFUNCTION(BlueprintCallable)
    static bool ShouldLimitSequenceGroup(const FName InGroup);
    
    UFUNCTION(BlueprintCallable)
    static void LimitSequenceActor(AGbxLevelSequenceActor* Player, const FName Group);
    
    UFUNCTION(BlueprintCallable)
    static void ClearLimitGroup(const FName Group);
    
};

