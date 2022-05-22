#pragma once
#include "CoreMinimal.h"
#include "AnimCompress_ACLBase.h"
#include "AnimCompress_ACL.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UAnimCompress_ACL : public UAnimCompress_ACLBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DefaultVirtualVertexDistance;
    
    UPROPERTY(EditAnywhere)
    float SafeVirtualVertexDistance;
    
    UPROPERTY(EditAnywhere)
    float SafetyFallbackThreshold;
    
    UPROPERTY(EditAnywhere)
    float ErrorThreshold;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BoneToIgnores;
    
    UAnimCompress_ACL();
};

