#pragma once
#include "CoreMinimal.h"
#include "LocalizationStatus.generated.h"

USTRUCT(BlueprintType)
struct FLocalizationStatus {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText PanelTitle;
    
    UPROPERTY(EditAnywhere)
    FText ShiftAccountLabel;
    
    UPROPERTY(EditAnywhere)
    FText StreamingServiceLabel;
    
    UPROPERTY(EditAnywhere)
    FText AccountNameLabel;
    
    UPROPERTY(EditAnywhere)
    FText ExtensionVersionLabel;
    
    UPROPERTY(EditAnywhere)
    FText ChannelTitleLabel;
    
    UPROPERTY(EditAnywhere)
    FText CurrentViewerLabel;
    
    OAKGAME_API FLocalizationStatus();
};

