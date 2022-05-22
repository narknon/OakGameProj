#pragma once
#include "CoreMinimal.h"
#include "DialogTimeSlotReference.h"
#include "GbxDataAsset.h"
#include "OakThumbnailManagerConfig.h"
#include "OakStreamingInteractionGlobals.generated.h"

class UStreamerBoosterData;
class UOakStreamingInteractionEvent;
class UDialogScriptData;

UCLASS()
class OAKGAME_API UOakStreamingInteractionGlobals : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UOakStreamingInteractionEvent*> GeneralEvents;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenCharacterProfileUpdateSteps;
    
    UPROPERTY(EditAnywhere)
    float AddedTimeForUpdateStepsDuringEvents;
    
    UPROPERTY(EditAnywhere)
    int32 MaxInventoryItemsPerUpdate;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UDialogScriptData> GeneralStreamingInteractionScript;
    
    UPROPERTY(EditAnywhere)
    FDialogTimeSlotReference InteractionStartDialog;
    
    UPROPERTY(EditAnywhere)
    FText StartInteractionTitle;
    
    UPROPERTY(EditAnywhere)
    FText StartInteractionDesc;
    
    UPROPERTY(EditAnywhere)
    FText PoolResultFormat;
    
    UPROPERTY(EditAnywhere)
    FOakThumbnailManagerConfig ThumbnailMgrConfig;
    
    UPROPERTY(EditAnywhere)
    float DirectorTriggeredEventsCheckTimer;
    
    UPROPERTY(EditAnywhere)
    float MoxxiBuffDurationSeconds;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStreamerBoosterData> StreamerBoosterData;
    
    UPROPERTY(EditAnywhere)
    bool bForceMoxxiEventDisabled;
    
    UOakStreamingInteractionGlobals();
};

