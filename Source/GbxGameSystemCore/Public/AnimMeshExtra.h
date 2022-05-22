#pragma once
#include "CoreMinimal.h"
#include "AnimActionDef.h"
#include "AnimMeshExtra.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FAnimMeshExtra {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimActionDef Anim;
    
    UPROPERTY(EditAnywhere)
    FName MeshName;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlotOverride;
    
    UPROPERTY(EditAnywhere)
    bool bHasAnimSlotOverride;
    
    UPROPERTY(EditAnywhere)
    float BlendInOverride;
    
    UPROPERTY(EditAnywhere)
    bool bHasBlendInOverride;
    
    UPROPERTY(EditAnywhere)
    float BlendOutOverride;
    
    UPROPERTY(EditAnywhere)
    bool bHasBlendOutOverride;
    
    FAnimMeshExtra();
};

