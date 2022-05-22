#pragma once
#include "CoreMinimal.h"
#include "DebugMenuGradebox.generated.h"

class UTextBlock;
class UImage;
class UCanvasPanel;

USTRUCT(BlueprintType)
struct FDebugMenuGradebox {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UCanvasPanel* Panel;
    
    UPROPERTY(Export, Transient)
    UImage* Image;
    
    UPROPERTY(Export, Transient)
    UTextBlock* Description;
    
    UPROPERTY(Export, Transient)
    TArray<UTextBlock*> Atts;
    
    OAKGAME_API FDebugMenuGradebox();
};

