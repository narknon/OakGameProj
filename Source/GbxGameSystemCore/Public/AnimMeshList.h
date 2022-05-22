#pragma once
#include "CoreMinimal.h"
#include "AnimMeshExtra.h"
#include "AnimActionDef.h"
#include "AnimMeshList.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FAnimMeshList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimActionDef Body3rd;
    
    UPROPERTY(EditAnywhere)
    FAnimActionDef Body1st;
    
    UPROPERTY(EditAnywhere)
    FAnimActionDef Weapon3rd;
    
    UPROPERTY(EditAnywhere)
    FAnimActionDef Weapon1st;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimMeshExtra> Extras;
    
    FAnimMeshList();
};

