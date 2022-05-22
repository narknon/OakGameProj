#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "PreviewActorManager.h"
#include "PreviewState.generated.h"

class AActor;
class UGbxAction;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPreviewState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    FPreviewActorManager PreviewActorManager;
    
    UPROPERTY()
    TSubclassOf<AActor> PreviewClass;
    
    UPROPERTY()
    FBox PreviewBounds;
    
    UPROPERTY()
    bool bAutoCycle;
    
    UPROPERTY()
    int32 PreviewIdx;
    
    UPROPERTY()
    TSubclassOf<UGbxAction> PreviewAction;
    
    UPROPERTY()
    float ElapsedTime;
    
    UPROPERTY()
    float Duration;
    
    UPROPERTY()
    bool bPlayingAction;
    
    UPROPERTY()
    bool bQueuedAction;
    
    UPROPERTY()
    bool bShowAction;
    
    UPROPERTY()
    bool bRepeatAction;
    
public:
    FPreviewState();
};

