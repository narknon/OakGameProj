#pragma once
#include "CoreMinimal.h"
#include "DialogDecisionTree.h"
#include "GbxDialogDataAsset.h"
#include "DialogScriptData.generated.h"

class UDialogTimeSlotData;
class UDialogNameTag;
class UDialogEvent;
class UObject;

UCLASS()
class GBXDIALOG_API UDialogScriptData : public UGbxDialogDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<UDialogTimeSlotData*> TimeSlots;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<UDialogNameTag*> PureEchoNameTags;
    
    UPROPERTY(EditAnywhere)
    TMap<UDialogEvent*, FDialogDecisionTree> EventTriggeredDecisionTrees;
    
    UPROPERTY(EditAnywhere)
    FDialogDecisionTree OtherConditionTriggeredDecisionTree;
    
    UPROPERTY(EditAnywhere)
    UObject* FaceFXAnimSet;
    
    UDialogScriptData();
};

