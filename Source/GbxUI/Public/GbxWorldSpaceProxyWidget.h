#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "GbxWorldSpaceProxyWidget.generated.h"

UCLASS(EditInlineNew)
class GBXUI_API UGbxWorldSpaceProxyWidget : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Alignment;
    
    UGbxWorldSpaceProxyWidget();
    UFUNCTION(BlueprintCallable)
    FVector GetWorldLocation();
    
};

