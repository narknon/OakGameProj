#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=GbxNavLayerBase -FallbackName=GbxNavLayerBase
#include "UObject/NoExportTypes.h"
#include "GbxNavLayer.generated.h"

UCLASS()
class GBXNAV_API UGbxNavLayer : public UGbxNavLayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FColor DrawColor;
    
public:
    UGbxNavLayer();
};

