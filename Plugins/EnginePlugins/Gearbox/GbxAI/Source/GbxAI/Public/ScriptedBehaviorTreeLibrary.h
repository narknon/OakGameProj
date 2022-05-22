#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ScriptedBehaviorTreeLibrary.generated.h"

class AActor;
class UStanceDataProvider;

UCLASS(BlueprintType)
class GBXAI_API UScriptedBehaviorTreeLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UScriptedBehaviorTreeLibrary();
    UFUNCTION(BlueprintCallable)
    static void PerformScriptedAbort(AActor* Target, bool bStopImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void BeginScriptedWait(AActor* Target, UStanceDataProvider* OptionalStance);
    
    UFUNCTION(BlueprintCallable)
    static void BeginScriptedLook(AActor* Target, AActor* LookAtActor, bool bAimAtActor, bool bFireWeaponAtActor, UStanceDataProvider* OptionalStance);
    
};

