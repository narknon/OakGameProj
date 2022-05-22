#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECARPartType.h"
#include "CARSkinMaterials.h"
#include "CARPreviewMeshOffsetByPart.h"
#include "CARPreviewMesh.generated.h"

class USkeletalMesh;
class UAnimInstance;
class UStaticMesh;

USTRUCT(BlueprintType)
struct OAKGAME_API FCARPreviewMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ComponentName;
    
    UPROPERTY(EditAnywhere)
    FTransform Offset;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> SkinMesh;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UAnimInstance> AnimInstanceClass;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(EditAnywhere)
    TArray<FCARSkinMaterials> Skin;
    
    UPROPERTY(EditAnywhere)
    ECARPartType ParentPart;
    
    UPROPERTY(EditAnywhere)
    FName ParentSocket;
    
    UPROPERTY(EditAnywhere)
    TArray<FCARPreviewMeshOffsetByPart> OffsetToOtherParts;
    
    FCARPreviewMesh();
};

