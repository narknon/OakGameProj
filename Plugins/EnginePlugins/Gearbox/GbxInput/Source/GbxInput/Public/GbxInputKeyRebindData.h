#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EGbxInputRebindPlatformSupportType.h"
#include "GbxInputKeyRebindData.generated.h"

UCLASS(Abstract)
class GBXINPUT_API UGbxInputKeyRebindData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FName RebindName;
    
    UPROPERTY(EditDefaultsOnly)
    EGbxInputRebindPlatformSupportType PlatformSupportType;
    
public:
    UGbxInputKeyRebindData();
};

