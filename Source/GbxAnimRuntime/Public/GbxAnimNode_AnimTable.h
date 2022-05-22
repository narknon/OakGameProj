#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_AssetPlayerBase.h"
#include "GbxAnimNode_AnimTable.generated.h"

class UGbxAnimTable;
class UAnimSequenceBase;
class UGbxAnimInstance;

USTRUCT(BlueprintType)
struct GBXANIMRUNTIME_API FGbxAnimNode_AnimTable : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGbxAnimTable* AnimTable;
    
    UPROPERTY(Transient)
    UAnimSequenceBase* Sequence;
    
    UPROPERTY(Transient)
    UGbxAnimInstance* GbxAnimInstance;
    
    UPROPERTY(Transient)
    bool bScaleRateByMeshScale;
    
    FGbxAnimNode_AnimTable();
};

