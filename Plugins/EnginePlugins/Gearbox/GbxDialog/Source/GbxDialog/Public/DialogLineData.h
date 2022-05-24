#pragma once
#include "CoreMinimal.h"
#include "DialogParameterMapping.h"
#include "GbxDialogDataAsset.h"
#include "ELineScorePriorityMode.h"
#include "DialogSelectionCondition.h"
#include "DialogTimeSlotReference.h"
#include "DialogLineData.generated.h"

class UDialogPerformanceData;
class UDialogEnumValue;
class UDialogEvent;

UCLASS(EditInlineNew)
class GBXDIALOG_API UDialogLineData : public UGbxDialogDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ELineScorePriorityMode ScorePriorityMode;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FDialogSelectionCondition> SelectionConditions;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UDialogEnumValue* SpeakingCharacter;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UDialogEnumValue* CharacterQualifier;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UDialogPerformanceData*> Performances;
    
    UPROPERTY(EditAnywhere)
    FString VoGMoodKey;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FDialogTimeSlotReference FollowupTimeSlot;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UDialogEvent* FollowupEvent;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FDialogParameterMapping> FollowupParameterMappings;
    
    UPROPERTY(EditAnywhere)
    bool bSequential;
    
    UDialogLineData();
};

