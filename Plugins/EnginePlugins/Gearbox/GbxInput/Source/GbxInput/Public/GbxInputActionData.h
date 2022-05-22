#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxInputActionData.generated.h"

UCLASS(Abstract, BlueprintType)
class GBXINPUT_API UGbxInputActionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
public:
    UGbxInputActionData();
};

