#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIAspectSettings_DropshipSpawn.generated.h"

class UGbxAction;

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_DropshipSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGbxAction> StartAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGbxAction> StopAction;
    
    FAIAspectSettings_DropshipSpawn();
};

