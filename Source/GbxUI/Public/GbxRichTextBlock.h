#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GbxRichTextBlock.generated.h"

UCLASS()
class GBXUI_API UGbxRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int16 Baseline;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ShadowColorAndOpacity;
    
public:
    UGbxRichTextBlock();
};

