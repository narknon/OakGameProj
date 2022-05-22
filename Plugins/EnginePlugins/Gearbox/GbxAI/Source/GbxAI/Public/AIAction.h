#pragma once
#include "CoreMinimal.h"
#include "AIActionBase.h"
#include "AIAction.generated.h"

class UAIAspect;
class UBlackboardData;
class UAIAction;

UCLASS(CollapseCategories, EditInlineNew, Placeable)
class GBXAI_API UAIAction : public UAIActionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBlackboardData* Blackboard;
    
    UPROPERTY(EditAnywhere)
    bool bWaitForAllAspects;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UAIAspect*> Aspects;
    
    UPROPERTY(Export)
    TArray<UAIAspect*> BuiltInAspects;
    
    UPROPERTY()
    bool bIsChildAction;
    
    UPROPERTY(Export)
    TArray<UAIAction*> SubActions;
    
private:
    UPROPERTY()
    uint8 ActionVersion;
    
public:
    UAIAction();
    UFUNCTION()
    UAIAction* CreateSubAction(UClass* ActionClass, FName Name);
    
};

