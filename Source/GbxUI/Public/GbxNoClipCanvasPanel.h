#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "UObject/NoExportTypes.h"
#include "GbxNoClipCanvasPanel.generated.h"

UCLASS()
class GBXUI_API UGbxNoClipCanvasPanel : public UCanvasPanel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D ClipZoneAdjustmentMin;
    
    UPROPERTY(EditAnywhere)
    FVector2D ClipZoneAdjustmentMax;
    
    UGbxNoClipCanvasPanel();
};

