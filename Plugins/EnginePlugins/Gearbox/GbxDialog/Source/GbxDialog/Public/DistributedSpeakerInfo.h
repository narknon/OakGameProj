#pragma once
#include "CoreMinimal.h"
#include "DistributedSpeakerInfo.generated.h"

class UGbxDialogComponent;

USTRUCT(BlueprintType)
struct FDistributedSpeakerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UGbxDialogComponent* DistributedSpeaker;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UGbxDialogComponent>> RepresentedSpeakers;
    
    GBXDIALOG_API FDistributedSpeakerInfo();
};

