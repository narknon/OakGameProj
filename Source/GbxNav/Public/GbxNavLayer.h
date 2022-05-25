#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=GbxNavLayerBase -FallbackName=GbxNavLayerBase
#include "GbxNavLayer.generated.h"


UCLASS()
class GBXNAV_API UGbxNavLayerBase : public UObject
{
};
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

