#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "DynamicRoomBaseData.generated.h"

class UTexture;

UCLASS(Abstract)
class GBXDYNAMICROOM_API UDynamicRoomBaseData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> PreviewPicture;
    
    UDynamicRoomBaseData();
};

