#pragma once
#include "CoreMinimal.h"
#include "GameplayTask_ScriptedAction.h"
#include "GameplayTask_ScriptedCover.generated.h"

class UCoverSlotComponent;
class UCoverUserComponent;
class ACover;
class AActor;
class UGameplayTask_ScriptedCover;

UCLASS(MinimalAPI)
class UGameplayTask_ScriptedCover : public UGameplayTask_ScriptedAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskScriptedCoverDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedCoverDelegate OnArrived;
    
private:
    UPROPERTY(Export)
    UCoverSlotComponent* CoverSlot;
    
    UPROPERTY(Export)
    UCoverUserComponent* CoverUser;
    
public:
    UGameplayTask_ScriptedCover();
    UFUNCTION(BlueprintCallable)
    static void EndScriptedCover(AActor* User);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ScriptedCover* BeginScriptedCover(AActor* User, ACover* Cover);
    
};

