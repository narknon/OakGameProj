#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogDecisionTree.h"
#include "DialogLookupSystem.generated.h"

class UDialogScriptData;
class UDialogEvent;
class UDialogControlSystem;
class UDialogBlackboard;

UCLASS()
class GBXDIALOG_API UDialogLookupSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDialogControlSystem* ControlSystem;
    
    UPROPERTY(Transient)
    UDialogBlackboard* Blackboard;
    
    UPROPERTY(Transient)
    TMap<UDialogEvent*, FDialogDecisionTree> EventTriggeringDecisionTrees;
    
    UPROPERTY(Transient)
    FDialogDecisionTree ConditionTriggeringDecisionTree;
    
    UPROPERTY()
    TMap<UDialogScriptData*, int32> ActiveScriptRegistrationIDs;
    
public:
    UDialogLookupSystem();
};

