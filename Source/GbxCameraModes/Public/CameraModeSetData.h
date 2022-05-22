#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "CameraModeSetData.generated.h"

class UCameraModeData;

UCLASS()
class GBXCAMERAMODES_API UCameraModeSetData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UCameraModeData*> Modes;
    
    UCameraModeSetData();
};

