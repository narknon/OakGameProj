#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGFxHUDWidgetInfo.generated.h"

class UGbxGFxHUDWidget;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxGFxHUDWidgetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxGFxHUDWidget> WidgetClass;
    
    UPROPERTY(EditAnywhere)
    FString InstanceString;
    
    UPROPERTY(EditAnywhere)
    uint8 Priority;
    
    FGbxGFxHUDWidgetInfo();
};

